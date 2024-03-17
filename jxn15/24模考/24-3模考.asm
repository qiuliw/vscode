DATA SEGMENT
    BUFFER DB 9 DUP(?),50H
    Y DB 'found$'
    N DB 'no found$'
DATA ENDS
CODE SEGMENT
    ASSUME ES:DATA,CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV ES,DX
    MOV DS,DX

    MOV CX,10   ;准备
    LEA SI,BUFFER
    MOV AL,50H
L1:
    CMP AL,ES:[SI] ;比较
    JZ YES
    INC SI
    LOOP L1
    ;未找到
    LEA DX,N
    JMP NEXT
YES:
    ;找到
    LEA DX,Y

NEXT:
    ;显示字符串
    MOV AH,09H
    INT 21H
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START


