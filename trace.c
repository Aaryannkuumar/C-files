#include<stdio.h>

int main(){

int rows,columns,primary_sum=0,secondary_sum=0;

printf("\nProgram to find the trace of a matrix.\n");

printf("Enter the number of rows:\t");
scanf("%d",&rows);

printf("\nEnter the number of columns:\t");
scanf("%d",&columns);

int arr[rows][columns];

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        printf("Enter the element of matrix row %d and column %d\t",i,j);
        scanf("%d",&arr[i][j]);
    }
}

    for (int i=0;i<rows;i++)
    {
        
        primary_sum += arr[i][i];

    }
     for (int i=0;i<rows;i++)
     {
        secondary_sum += arr[i][columns-1-i];
     }
    

printf("\n The trace of the matrix is:%d",primary_sum);

printf("\n The trace of the matrix is:%d",secondary_sum);

return 0;

}