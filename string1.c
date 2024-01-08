#include<stdio.h>

int main(){

char name[100];

printf("\nEnter your full name:\t");

fgets(name,sizeof(name),stdin);

printf("\nJai Shree Ram,Dear %s",name);

return 0;



}