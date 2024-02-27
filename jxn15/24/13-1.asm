;有3个8位二进制数连续存放在 DATO 开始的内存单元中，设它们之中至少有两个数是相同的。
;编写程序找出与另外两数不同的数，把该数所在的地址（段内偏移地址）送到 DATEO 单元，
;若三个数都相同则送 OFFFFH 到单元。

;三数两两比较，统计相同的对数。有以下几种可能
;a b b 0 直接送 a地址
;b b b 3 送 0FFFH

;b a b 1 再次比较，不同则送后面的数地址
;b b a 1

DATA SEGMENT
    DAT0 DB 1,2,2
    DATE0 DW ?
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX

    MOV DL,0

    LEA SI,DAT0
    MOV AL,[SI]
    CMP AL,[SI+1];1-2
    JNZ L1
    INC DL
L1:
    CMP AL,[SI+2];1-3
    JNZ L2
    INC DL
L2:
    MOV AL,[SI+1]
    CMP AL,[SI+2];2-3
    JNZ L3
    INC DL
L3:
    CMP DL,0
    JZ ZERO
    CMP DL,3
    JZ THREE
    
;ONE
    MOV AL,[SI]
    CMP AL,[SI+1]
    JZ L4
    INC SI
    MOV DATE0,SI
    JMP NEXT
L4:
    ADD SI,2
    MOV DATE0,SI
    JMP NEXT

ZERO:
    MOV DATE0,SI
    JMP NEXT

THREE:
    MOV DATE0,0FFFFH

NEXT:
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START



