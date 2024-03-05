;编程实现：屏幕显示键盘接收的一个小写字符的前导、该字符和后继字符
;输入： c
;输出：bcd
;不考虑a和z的特殊情况

CODE SEGMENT
    ASSUME CS:CODE
START:
    MOV AH,01H
    INT 21H
    CMP AL,'a'
    JB EXIT
    CMP AL,'z'
    JA EXIT
    
    MOV AH,02H
    MOV DL,AL
    DEC DL
    INT 21H
    INC DL
    INT 21H
    INC DL
    INT 21H

EXIT:
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START