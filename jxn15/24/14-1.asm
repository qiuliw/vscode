;已知在内存单元中存放一个长度为20 的字符串，编写完整汇编程序实现求字符串中的最大的 ASCII 码值，并将其存入内存单元中。
DATA SEGMENT
    STR DB ...
    MAX DB ?
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX

    MOV CX,19
    LEA SI,STR
    MOV AL,[SI]
    INC SI
L0:
    CMP AL,[SI]
    JBE L1
    MOV AL,[SI]
L1:
    INC SI
    LOOP L0
    
    MOV MAX,AL

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
