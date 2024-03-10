;在内存的数据段中存放了若干个 8位带符号数，数据块的长度为 COUNT( 不超过255)，首地址为 TABLE，试统计其中正元素、负元素及零元素的个数，并分别将个数存人 PLUS、MINUS 和 ZERO 单元中。
DATA SEGMENT
    TABLE DB 254 DUP(?)
    COUNT DB 254
    PLUS DB 0
    MINUS DB  0
    ZERO DB 0
DATA ENDS
CODE SEGMENT
    ASSUME  CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,TABLE
    MOV CX,COUNT
L0:
    MOV AL,[SI]
    CMP AL,0
    JG L1
    JL J2
    INC ZERO
    JMP LL
L1:
    INC PLUS
    JMP LL
L2:
    INC MINUS
LL:
    LOOP L0

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START