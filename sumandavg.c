#include<stdio.h>

int main(){
int elements,sum=0;
float average;

printf("\nProgram to get sum and average of entered numbers.\n");

printf("Enter the total number of numbers you want the average of:\t");

scanf("%d",&elements); // entered total number of addressess should be in array.

int arr[elements]; // an array defined

for(int i=0;i<elements;i++)
{
    printf("\tnumber %d:-",i+1); // for printing place of any entered number , (i+1) to start with 1.

    scanf("%d",&arr[i]); // numbers getting stored chronologically.

    sum = sum + arr[i]; 
}

average = (float) sum / elements; // tyoe casting used.

printf("the sum is %d and average is %.2f",sum,average);

return 0;



}