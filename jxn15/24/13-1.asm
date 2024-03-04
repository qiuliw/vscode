;有3个8位二进制数连续存放在 DATO 开始的内存单元中，设它们之中至少有两个数是相同的。
;编写程序找出与另外两数不同的数，把该数所在的地址（段内偏移地址）送到 DATEO 单元，
;若三个数都相同则送 OFFFFH 到单元。

;三数两两比较，统计相同的对数。有以下几种可能

;b b b 3 送 0FFFH

;确定了必有1个不同的，两两比较。相同则送剩余的一个不同的到DATE0
;a b b 1 
;b a b 1
;b b a 1

DATA SEGMENT
    DAT0 DB 1,2,2
    DATE0 DW ?
DATA ENDS
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
    MOV DX,DATA
    MOV DS,DX

    MOV DL,0

;三数两两比较
    LEA SI,DAT0
    MOV AL,[SI]
    CMP AL,[SI+1];1-2
    JNZ L1
    INC DL
L1:
    CMP AL,[SI+2];1-3
    JNZ L2
    INC DL
L2:
    MOV AL,[SI+1]
    CMP AL,[SI+2];2-3
    JNZ L3
    INC DL
L3:
    CMP DL,3
    JZ THREE

;ONE 必有一个不同
    CMP AL,[SI+1];1-2
    JNZ L4
    LEA AH,DAT0+2;1-2相同，送3
    MOV DATE0,AH
    JMP NEXT
L4:
    CMP AL,[SI+2];1-3
    JNZ L5
    LEA AH,DAT0+1;1-3相同，送2
    MOV DATE0,AH
    JMP NEXT
L5:
    LEA AH,DAT0;剩 2-3相同的可能，送1
    MOV DATE0,AH
    JMP NEXT

;三个都相同
THREE:
    MOV DATE0,0FFFFH

NEXT:
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START



