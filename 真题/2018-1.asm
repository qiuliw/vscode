;自内存0500H单元开始，保存有10个无符号字节类型的数据，
;分别为45H、 89H、11H、26H、8AH、9FH、78H、0AAH、18H、3EH，
;请编写程序，求这 10个数之和。
;要求：
;（1）用8位二进制数运算方式进行计算。
;（2）结果用两个字节表示。
;（3把结果存放到 050AH 和 050BH 单元，且高字节放在050BH单元。
DATA SEGMENT
    NUM DB 45H,89H...
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,NUM
    MOV CX,10
    MOV AX,0

L1:
    ADD AL,[SI]
    ADC AH,0;调整
    INC SI
    LOOP L1

    MOV [050AH],AL;存放
    MOV [050BH],AH

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START
