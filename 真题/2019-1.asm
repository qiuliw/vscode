;请写出汇编语言程序实现如下功能：从键盘输入1~5 中的任何一个数，分别在屏幕上显示“1st”、“2st”、“3st”、“4st”、“5st”，键入其他字符则显示“*”。
DATA SEGMENT
    STR DB 'st$'
DATA ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX

    MOV AH,1
    INT 21H ;输入
    MOV DL,AL
    MOV AH,2
    INT 21H
    LEA DX,STR
    MOV AH,9
    INT 21H

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
