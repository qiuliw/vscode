#include <stdio.h>
#include <string.h>
int main() {
    int num[26] = {0}, i;
    char str[100];
    gets(str);
    for (i = 0; i < strlen(str); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            ++num[str[i] - 'A'];
        }
    }
    for (i = 0; i < 26; ++i) {
        if (num[i] != 0) {
            printf("%c 的个数是 %d 个\n", 'A' + i, num[i]);
        }
    }
    return 0;
}