int f(char *s,char *t){
    while(*s!='\0'&&*t==*s){
        s++;
        t++;
    }
    return *s==*t;
}
