#include<stdio.h>

int main(){

int size, max;

printf("\n Enter the size of array:\t");

scanf("%d",&size);

int arr[size];

for(int i=0;i<size;i++)
{
    printf("\nNumber:%d\t",i+1);

    scanf("%d",&arr[i]);
}

max = arr[0];

for(int i = 0; i < size; i++)
{
 if(arr[i]>max)
 {
    max=arr[i];
 }   
}

printf("\nThe maximum number in array is:%d",max);

return 0;

}