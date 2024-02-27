#include <stdio.h>
/*
按照规定，在高速公路上行使的机动车，达到或超出本车道限速的10%则处200元罚款；
若达到或超出 50%，就要吊销驾驶证。编写程序根据车速和限速自动判别对该机动车的处理。
输入2个正整数，分别对应车速和限速。

输出处理意见：
若属于正常行驶，则输出"OK"；
若应处罚款，则输出 "Exceed ×%. Ticket 200"；
若应吊销驾驶证，则输出 "Exceed x% License Revoked",其中x是超速的百分比，稽确到整数。

*/
int main(){
    float speed,limit;
    scanf("%f %f",&speed,&limit);
    if(speed<limit*1.1){
        printf("OK");
    }else if(speed<limit*1.5){
        printf("Exceed %.0f%% Ticket",(speed/limit-1)*100);
    }else{
        printf("Exceed %.0f%% License Revoked",(speed/limit-1)*100);
    }
    return 0;
}