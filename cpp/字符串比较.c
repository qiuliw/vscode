int f(char *s,char *t){
    while(*s!='\0'&&*t==*s){
        s++;
        t++;
    }
    return *s==*t;
}

// 有三种可能退出循环
// 字符串相等情况与 *s == *t 的值相同