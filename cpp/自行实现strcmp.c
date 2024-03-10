#include <stdio.h>
#include <string.h>

int myStrcmp(char *c1,char *c2){
    //相同到\0
    while(*c1==*c2){
        if(*c1=='\0') return 0;
        c1++;
        c2++;
    }
    return *c1-*c2;
}