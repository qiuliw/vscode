;在 DATA1 单元开始存放10个无符号字节数据，编程求10个中偶数的个数，将结果存于 DATA2 单元。
DATA SEGMENT
    DATA1 DB 1,3,...
    DATA2 DB ?
DATA ENDS
CODE SEGMENT
    CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,DATA1
    MOV CX,10
    MOV DL,0
L2:
    MOV AL,[SI]
    TEST AL,1
    JNZ L1
    INC DL
L1:
    LOOP L2

    MOV DATA2,DL

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START