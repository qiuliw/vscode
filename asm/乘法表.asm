；输出九九乘法表
DATA SEGMENT
    I DB 1
    RESULT DW ?
    CXX DW ?
DATA ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    MOV RESULT,AX
    LEA SI,RESULT
    MOV CX,9;N
L0:
    MOV BL,1;J
L1:
    MOV AH,2;
    MOV DL,BL;
    ADD DL,30H
    INT 21H
    MOV DL,'*'
    INT 21H
    MOV DL,I;显示i
    ADD DL,30H
    INT 21H
    MOV DL,'='
    INT 21H

    MOV AL,I
    MUL BL
    AAM
    ADD AX,3030H
    MOV RESULT,AX;保护 dos调用会影响AL
    MOV AH,02H;显示结果
    MOV DL,[SI+1];显示高8
    INT 21H
    MOV DL,[SI];显示低8
    INT 21H
    MOV DL,' '
    ;
    MOV CXX,CX  ;延时
    MOV CX,65535
STOP:           
    LOOP STOP
    MOV CX,CXX
    ;
    INT 21H
    CMP BL,I
    JZ L2;第二层循环结束
    INC BL
    JMP L1
L2:
    INC I
    MOV DL,10;换行
    INT 21H
    LOOP L0
    MOV AH,4CH
    INT 21H

CODE ENDS
    END START
