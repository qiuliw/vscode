;从BUF字节单元开始存有按增序排好顺序的一个带符号数组，数组长度N在LEN字节单元。在 
;POSI字节单元存有一个正数，要求将其按顺序插大到数组中，并修改数组长度。

;用POSI去从第一个向后比较，如果有数比他大，确定下标，后面后移，插入；
;没有则插入末尾
DATA SEGMENT
    BUF DB ... ;存LEN个递增带符号数
    LEN DB N;数组长度
    POSI DB ?;待插入的数
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX


    MOV CX,LEN
    MOV AL,POSI
    LEA SI,BUF;准备
L0:
    CMP AL,[SI]
    JL INPUT;找到比POSI大，跳转插入
    INC SI
    LOOP L0
    ;没找到比POSI大，插末尾
    MOV [SI],AL
    JMP NEXT

INPUT:
    ;后面的数后移腾位置
    LEA DI,BUF
    ADD DI,LEN;确定数组末尾空白单元
L1:
    CMP DI,SI
    JZ L2;到达要腾的位置则终止向后赋值
    MOV BL,[DI-1]
    MOV [DI],BL;向后赋值
    DEC DI
L2:
    MOV [SI],AL;插入


    MOV AH,4CH
    INT 21H
CODE ENDS
    END START


;-----------------------------------------答案--------------------------------------

DATA SEGMENT
    BUF DB ... ;存LEN个递增带符号数
    LEN DB N;数组长度
    POSI DB ?;待插入的数
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX


    MOV CX,LEN
    MOV AL,POSI
    LEA SI,BUF;准备
L0:
    CMP AL,[SI]
    JL INPUT;找到比POSI大，跳转插入
    INC SI
    LOOP L0
    ;没找到比POSI大，插末尾
    MOV [SI],AL
    JMP NEXT

INPUT:
    ;后面的数后移腾位置
    ADD SI,CX;剩余次数加当前地址正好指向队尾+1。并且次数等于需要后移的次数，可以直接继承CX进行LOOP
L1:
    MOV AH,[SI-1];中转
    MOV [SI],AH
    DEC SI
    LOOP L1
    MOV [SI],AL;插入新数据

NEXT:
    MOV AL,LEN
    INC AL
    MOV LEN,AL;更新数组长度

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
