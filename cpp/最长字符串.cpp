#include "string.h"
#include <stdio.h>

int main() {
    char strs[10][20];
    for (int i = 0; i < 10; ++i) {
        scanf("%s",strs[i]);
    }
    int max, max_index, len;
    max = 0;
    max_index = 0;
    for (int i = 0; i < 10; ++i) {
        len = strlen(strs[i]);
        if (len > max) {
            max = len;
            max_index = i;
        }
    }
    puts(strs[max_index]);
}