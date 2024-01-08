#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

int rows,columns;

printf("\t******* Matrix ********\n");

printf("Enter the number of rows:\t");
scanf("%d",&rows);

printf("\nEnter the number of columns:\t");
scanf("%d",&columns);

int arr[rows][columns];

printf("\n Enter the elements of matrix -->");

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}

return 0;


}