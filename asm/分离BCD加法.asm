code segment
    assume cs:code
start:
    MOV AH,01H  ;键盘输入
    INT 21H
    MOV BL,AL
    INT 21H
    MOV BH,AL   ;放BX 原字符
    MOV AX,BX   ;转值->AX
    SUB AX,3030H
    ADD AL,AH   ;相加
    AAA         ;调整
    ADC AH,0    ;AH=CF
    MOV CX,AX   ;结果-> CX
    MOV AH,02H  ;显示
    MOV DL,BL
    INT 21H
    MOV DL,'+'
    INT 21H
    MOV DL,BH
    INT 21H
    MOV DL,'='
    INT 21H
    CMP CH,0;显示高
    JZ NEXT
    MOV DL,'1'
    INT 21H
NEXT:
    MOV DL,CL;显示低
    ADD DL,30H
    INT 21H
    MOV AH,4CH
    INT 21H
code ends
    end start