;已知一个字数组从内存 TAB 单元开始存放，长度为N，
;要求计数该数组中0的个数，结果存入 COUNT 单元，
;设计汇编 程序段。
    LEA SI,TAB
    MOV CX,N
    MOV DX,0;存放个数
L0:
    MOV AX,[SI]
    CMP AX,0
    JNE NEXT
    INC DX
NEXT:
    ADD SI,2
    LOOP L0
    
    MOV COUNT,DX
    HLT
