#include<stdio.h>
#include<string.h>

int main(){

char str[500];
int count=0;

printf("\nEnter the sentence of which you want to count words of:-->\t");

fgets(str,sizeof(str),stdin);

int length = strlen(str);

for(int i=0;i<=length-1;i++)
{
    if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
    {
        count++;
    }
}

printf("\nNumber of words are:%d",count);

return 0;

}