;试编写一段程序，要求比较数组 ARRAY 中的三个 16位有符号数。根据比较结果，置 FLAG 标志。
;（1）如果三个数都不相等，则置 FLAG 为零。
;（2）如果三个数有两个相等，则 FLAG为1。
;（3）如果三个数全相等，则 FLAG为2。

;大致逻辑:
;各数互相比较，相等DX++，DX可能为0，1，3
;若为3，DX--
;DX即为结果

DSEG SEGMENT
ARRAY DW 3 DUP ()
DSEG ENDS

CSEG SEGMENT
MAIN PROC FAR
ASSUME CS: CSEG, DS: DSEG
START: PUSH DS ;设置返回DOS
SUB AX, AX
PUSH AX
MOV AX, DSEG
MOV DS, AX ;给DS赋值
BEGIN: LEA SI, ARRAY
MOV DX, 0 ;(DX)用于存放所求的结果
MOV AX, [SI]
MOV BX, [SI+2]
CMP AX, BX ;比较第一和第二两个数是否相等
JNE NEXT1
INC DX
NEXT1: CMP [SI+4], AX ;比较第一和第三两个数是否相等
JNE NEXT2
INC DX
NEXT2: CMP [SI+4], BX ;比较第二和第三两个数是否相等
JNE NUM
INC DX
NUM: CMP DX, 3
JL DISP
DEC DX
DISP: ADD DL, 30H ;转换为ASCII码
MOV AH, 2 ;显示一个字符
INT 21H
RET
MAIN ENDP
CSEG ENDS ;以上定义代码段

END START