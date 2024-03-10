;计算100个正整数之和的完整程序，如果和不超过16位字的范围，则保存其和到WORDSUM,如超过则显示‘overflow’
DATA SEGMENT
    NUMS DW 100DUP(?)
    WORDSUM DW ?
    STR DB 'overflow','$'
DATA ENDS
CODE SEGMENT
    ASSUM DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,NUMS
    MOV BX,0
    MOV CX,100
L1:
    MOV AX,[SI]
    ADD BX,AX
    INC SI
    INC SI
    LOOP L1
    JC L2
    MOV WORDSUM,BX
    JMP NEXT
L2:
    LEA DX,STR
    MOV AH,9
    INT 21H
NEXT:
    MOV AH,4CH
    INT 21H
CODE SEGMENT
    END START


    