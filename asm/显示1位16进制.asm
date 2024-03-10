已知AL的值为16进制的0~F中的一位数码，阅读下列程序段：
```NASM
HEC PROC FAR
    CMP AL,10
    JC K1   ;<10
    ADD AL,7;>=10， A- 10+7->11H +30H->41H
K1: ADD AL,30H
    MOV DL,AL
    MOV AH,2
    INT 21H
    RET
HEC ENDP
```
1. 该程序完成的功能是 显示AL的值
2. 如执行前AL=0BH,执行后DL=42H,此时屏幕显示B