#include<stdio.h>

int main(){
int elements,sum=0;
float average;

printf("\nProgram to get sum and average of entered numbers.\n");

printf("Enter the total number of numbers you want the average of:\t");

scanf("%d",&elements);

int arr[elements];

for(int i=0;i<elements;i++)
{
    printf("\tnumber %d:-",i+1);

    scanf("%d",&arr[i]);

    sum = sum + arr[i];
}

average = (float) sum / elements;

printf("the sum is %d and average is %.2f",sum,average);

return 0;



}