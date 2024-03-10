;数据段存放着100个ASCII码字符，先给这些字符添加奇偶校验位（bit7),使每个字符中"1"的个数为偶数，再顺序输出到地址100H的端口
DATA SEGMENT
    CHARS DB 100 DUP(?)
DATA ENDS
CODE SEGMENT
    ASSUME  CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,CHARS
    MOV CX,100
    MOV DX,100H
L0:
    MOV AL,[SI]
    ADD AL,0
    JP L1
    ADD AL,80H;添加校验位
    MOV[SI], AL;回送
L1: OUT DX, AL;输出
    INC SI
    LOOP L0
    MOV AH,4CH 
    INT 21H 
CODE ENDS
    END START