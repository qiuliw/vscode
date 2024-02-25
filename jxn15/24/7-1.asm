;首地址为 DAT 的数据区中有3个互不相等的8位无符号整数，编写一个完整的程序，将这3个数的最大者存放到 MAX 单元。
DATA SEGMENT
    DAT DB 1,2,3
    MAX DB ?
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX
    
    MOV AL,DAT
    CMP AL,DAT+1
    JAE L1
    MOV AL,DAT+1
L1:
    CMP AL,DAT+2
    JAE L2
    MOV AL,DAT+2
L2:
    MOV MAX,AL

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
