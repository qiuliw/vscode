; 判断字类型变量X的奇偶，偶字节BUF置0，奇置1
DATA SEGMENT
    X DW ?
    BUF DB ?
DATA ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    MOV AX,X
    SHR AX,1
    JC L1;为奇
    MOV BUF,0;为偶
    JMP NEXT
l1: 
    MOV BUF,1
NEXT:
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START