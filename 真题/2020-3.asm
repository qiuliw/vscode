;编写汇编程序，从键盘接收一个字符，判断其是否为小写字母，是则将之转换为大写字母并输出，否则原样输出。
CODE SEGMENT
    ASSUME CS:CODE
START:
    MOV AH,01H
    INT 21H
    CMP AL,'a'
    JB L1
    CMP AL,'z'
    JA L1
    SUB AL,20H
L1:
    MOV DL,AL
    MOV AH,2
    INT 21H

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
