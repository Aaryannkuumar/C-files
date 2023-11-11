#include<stdio.h>

int main(){

char st[100];


printf("enter the line:\n");
fgets(st,sizeof(st),stdin);


printf("%s\n",st);


return 0;

}