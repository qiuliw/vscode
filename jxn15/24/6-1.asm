;已知在内存中从 DA 单元起存放有 10 个带符号字节数据，统计其中负数的个数并放人 FU 单元。
DATA SEGMENT
    DA DB 10 DUP(?)
    FU DB ?
DATA ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,DA
    MOV CX,10
    MOV DL,0
L0:
    MOV AL,[SI]
    CMP AL,0
    JGE L1
    INC DL
L1:
    LOOP L0
    MOV FU,DL

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
