;在M单元和N单元分别存有一个8位无符号数36H和95H，要求比较这两个无符号数，
;并根据比较结果在屏幕上显示 M>N 或 N>M（假设这两个数不相等）。
DATA SEGMENT
    M DB 36H
    N DB 95H
    STR1 DB 'M>N',0
    STR2 DB 'N>M',0
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX
    MOV AL,M
    CMP AL,N
    JA L1
    LEA DX,STR1
    JMP NEXT
L1:
    LEA DX,STR2
    
    MOV AL,9
    INT 21H
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
