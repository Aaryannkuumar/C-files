#include<stdio.h>

int main(){
int size,sum=0;

printf("\nEnter the size of array:\t");
scanf("%d",&size);

int arr[size];

for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}

for(int j=0;j<size;j++)
{
    sum += arr[j];
}

printf("\nThe sum of all elements of array is: %d",sum);

return 0;



}