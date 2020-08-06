#include <stdio.h>

int main(){
    char str[15];

    printf("Who are you?\n>");
    scanf("%s",str);
    printf("Hello, %s\n",str);
    return 0;
}