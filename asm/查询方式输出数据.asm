;在一个采用查询方式输人数据的I/O 接口中，8位数据端口地址为 2000H，一位状态端口地址为 2002H(外设数据准备好信号高电平有效，接至数据总线的D7位)。设 1000个字节数据存在内存 BUFFER 为首地址的缓冲区中，写出查询方式输出这 1000 字节数据的程序段。

DATA SEGMENT
    BUFFER DB 100 DUP(?)
DATA ENDS
CODE SEGMENT
    ASSUME  CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    LEA SI,BUFFER
    MOV CX,1000
L0:
    MOV DX,2002H
L1:
    IN AL,DX
    TEST AL,80H
    JZ L1 ;检验状态口
    
    MOV DX,2000H
    MOV AL,[SI]
    OUT DX,AL;送数据
    
    INC SI
    LOOP L0

    MOV AH,4CH
    INT 21H
CODE ENDS
    END START