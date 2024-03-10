;试编写一程序段，要求在长度为 100H 字节的数组 ARRAY 中
;找出大于42H的无符号数的个数并存人字节单元UP中
;找出小于42H的无符号数的个数并存入字节单元DOWN中

DATA SEGMENT
    ARRAY DB 100H DUP(?)
    UP DB ?
    DOWN DB ?
DATA ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,ARRAY
    MOV CX,100H
    MOV DX,0
L0:
    MOV AL,[SI]
    CMP AL,42H
    JA L1
    JB L2
    JMP NEXT
L1:
    INC DH
    JMP NEXT
L2:
    INC DL
NEXT:
    LOOP L0
    
    MOV UP,DH
    MOV DOWN,DL
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START

