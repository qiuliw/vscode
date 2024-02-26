/*
学生信息包括姓名和3门课成绩，根据要求，补全函数
*/
#include <stdio.h>
#include <string.h>

struct stu{
    char name[10];
    int a,b,c;
};
void input(struct stu *s,int n){
    for (int i=0; i<n; ++i) {
        scanf("%s",s->name);
        scanf("%d %d %d",&s->a,&s->b,&s->c);
    }
}
void sort(struct stu *s,int n){
    for (int i=0; i<n-1; ++i) {
        for (int j=i+1; j<n; ++j) {
            if(strcmp(s[i].name,s[j].name)>0){
                struct stu t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
}
int maxS(struct stu *s,int n){
    int imax=0;
    for(int i=1;i<n;++i){
        if(s[i].a+s[i].b+s[i].c>s[imax].a+s[imax].b+s[imax].c){
            imax=i;
        }
    }
    return imax;
}

int main(){
    struct stu s[10];
    int pos;
    input(s,10);//数据录人
    sort(s,10);//按姓名排序（拼音的字典顺序） 
    pos=maxS(s,10);//获取总分最高学生的下标 
    printf("最高分是%s\n",s[pos].name);
}


