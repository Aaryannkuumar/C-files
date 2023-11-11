#include<stdio.h>
#include "myfile.c"

int main(){
    int a=30,b=40;
    int c;
    c=sum(a,b);
    printf("%d",c);
    return 0;
    
}