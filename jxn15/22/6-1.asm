;已知字节变量X和Y，编写源程序，完成函数表达式的功能：
;Y=
;1 X>0
;0 X=0
;-1 X<0

DATA SEGMENT
    X DB ?
    Y DB ?
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX
    
    MOV X,AL
    CMP AL,0
    JG UP
    JL DOWN
    ;ZERO
    MOV Y,0
    JMP NEXT
UP:
    MOV Y,1
    JMP NEXT
DOWN:
    MOV Y,-1
NEXT:

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
