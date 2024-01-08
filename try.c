#include<stdio.h>
#include<string.h>

int main(){
char str[200];
    printf("enter your name:\t");
    scanf("%[^\n]",&str);

    printf("%s",str);

    return 0;
}