#include<stdio.h>
#include<string.h>

int main(){

FILE *ptr;

char string[200];

ptr = fopen("myfile.txt","r+");

if(ptr == NULL)
{
    printf("Error in opening the file.");
    return 1;
}

fscanf(ptr,"%[^\n]%*c",string);

printf("the text is:%s",string);

scanf("%[^\n]%*c",&string);

fprintf(ptr,"%s",string);

fclose(ptr);

return 0;



}