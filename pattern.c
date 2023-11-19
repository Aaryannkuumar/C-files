#include<stdio.h>

int main(){

int a;

printf("\nEnter the number of rows you want the pattern should be of:\t");

scanf("%d",&a);

for(int i=1;i<=a;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("%d\t",j);
    }
    printf("\n");
}

return 0;

}