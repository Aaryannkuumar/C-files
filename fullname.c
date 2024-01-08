#include<stdio.h>
#include<string.h>

int main(){

int n;

printf("\nEnter the size of array:\t");
scanf("%d",&n);

char names[n][100];

getchar(); // to remove newline character from input buffer.

printf("\n");

for(int i=0;i<n;i++)
{
    printf("Number %d: ",i+1);
    fgets(names[i],sizeof(names[i]),stdin);
}

printf("\n");

for(int m=0;m<n;m++)
{
    printf("Number %d --> %s",m+1,names[m]);
    printf("\n");
}

return 0;


}