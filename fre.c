#include<stdio.h>

#include<string.h>

int main(){
char st[100];
 int i,j;
printf("Enter the string:\n");
scanf("%s",st);

int length = strlen(st);

for(i=0, j=length-1; i<j; i++, j--)
{
    char temp = st[i];
    st[i]=st[j];
    st[j]=temp;
}

printf("the reversed string is : %s",st);
return 0;

}