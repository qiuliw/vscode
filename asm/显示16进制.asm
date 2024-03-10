;编程实现将 BX 寄存器内的二进制数用 16 进制的形式，在屏幕上显示出来。
CODE SEGMENT
    ASSUME CS:CODE
START: 
    MOV BX,1111110111100001B
    MOV CX,4 ;循环四次
L1:
    PUSH CX;压栈保护，后面移位要用到CL
    MOV CL,4
    ROL BX,CL ;每次循环环左移四位,取低4位，即从高4到低4显示
    MOV DX,BX
    AND DL,0FH ;每次取低四位，来表示一个十六进数
    CMP DL,9
    JBE L2
    ADD DL,7;大于9转字母 ASCII需要额外+7； 10 +30H+7 -> 'A'
L2:
    ADD DL,30H ;转化成为ASCII码
NEXT: 
    MOV AH,2;显示
    INT 21H
    POP CX;出栈
    LOOP L1

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START