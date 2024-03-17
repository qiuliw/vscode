#include <stdio.h>

typedef struct{
    char name[10];
    double wage;
    double bonus;
    double allowance;
    int due;
} MemInfo;

int main(){
    MemInfo s[30];
    int n;
    double base;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%s %lf %lf %lf",s[i].name,&s[i].wage,&s[i].allowance,&s[i].bonus);
        base=s[i].wage+s[i].allowance+s[i].bonus;
        if(base<=3000){
            s[i].due=base*0.005;
        }else if(base<=5000){
            s[i].due=base*0.01;
        }else{
            s[i].due=base*0.015;
        }
    }
    int max=s[0].due;
    for (int i=1; i<n; ++i) {
        if(s[i].due>max)max=s[i].due;
    }
    for(int i=0;i<n;++i){
        if(s[i].due==max)
            printf("%s %d\n",s[i].name,s[i].due);
    }

    return 0;
}