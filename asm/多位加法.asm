DATA SEGMENT
    NUM1 DW 1234H,5678H
    NUM2 DW 9ABCH,0DEF0H
DATA ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    MOV AX,NUM1+1
    MOV BX,NUM2+1
    ADD AX,BX
    MOV NUM1+1,AX
    MOV AX,NUM1
    MOV BX,NUM2
    ADC AX,BX
    MOV NUM1,AX
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START