#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char str[500];

FILE *ptr=fopen("myfile.txt","r");

fscanf(ptr,"%s",&str);

fprintf(ptr,"%s",str);

return 0;






}