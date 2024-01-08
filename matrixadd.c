#include<stdio.h>

int main(){
int rows,columns;

printf("\n Program to print result of addition of two matrix.\n\n");

printf("Enter the number of rows:\t");
scanf("%d",&rows);

printf("Enter the number of rows:\t");
scanf("%d",&columns);

int matrix_1[rows][columns];
int matrix_2[rows][columns];

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        printf("\nEnter elements of matrix 1:\t");
        scanf("%d",&matrix_1[i][j]);
    }
}

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        printf("\nEnter elements of matrix 2:\t");
        scanf("%d",&matrix_2[i][j]);
    }
}


printf("\n\n");


int matrix_3[rows][columns]; // created third matrix for result

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        matrix_3[i][j]=matrix_1[i][j]+matrix_2[i][j];
    }
}

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        printf("%d",matrix_3[i][j]);
        printf("\t");
    }
    printf("\n");
}

return 0;

}