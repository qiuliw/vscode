;已知从 BUF 单元开始存放着10个8位无符号数，
;要求编写汇编语言程序將这10个数去掉一个最大的，
;再去掉一个最小的，将其余的数的算术平均值计算出來并存于 AVERG 单字节单元。
DATA SEGMENT
    BUF DB 10 DUP(?)
    AVERG DB ?
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX
    
    LEA SI,BUF
    MOV CX,9
    MOV AL,[SI];MIN
    MOV AH,[SI];MAX
    MOV DL,0;SUM
    INC SI

LL
    CMP AL,[SI];比较最小值
    JBE L0
    MOV AL,[SI]
L0:
    CMP AH,[SI];比较最大值
    JGE L1
    MOV AH,[SI]
L1:
    ADD DL,[SI];求和
    INC SI
    LOOP LL

    DEC DL,AH
    DEC DL,AL
    MOV AVERG,DL;求平均值

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START