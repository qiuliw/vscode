;数据段有一字变量YEAR存放了某个年份，判定该年份是否为闰年，并在屏幕上显示’ leap year’或’no leap year’。
DATA SEGMENT
    YEAR DW 2024
    STR1 DB 'leap year','$'
    STR2 DB 'no leap year','$'
DATA ENDS
CODE SEGMENT
    ASSUME  CS:CODE,DS:DATA
START:
    ;YEAR%4==0&&YEAR%100!=0||YEAR%400==0
    MOV DX,DATA
    MOV DS,DX

    MOV AX,YEAR
    MOV DX,0
    MOV BX,4
    DIV BX  ;YEAR/4
    CMP DX,0
    JNZ L0  ;L0继续验证

    MOV AX,YEAR
    MOV DX,0
    MOV BX,100
    DIV BX  ;YEAR/100
    CMP DX,0
    JNZ L0  ;L0继续验证
    JMP YES ;闰年

L0:
    MOV AX,YEAR
    MOV DX,0
    MOV BX,400  
    DIV BX
    CMP DX,0;YEAR/400
    JZ YES 

NO:
    LEA DX,STR2
    JMP NEXT
YES:
    LEA DX,STR1
    
NEXT:
    MOV AH,9
    INT 21H
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START