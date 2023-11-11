#include<stdio.h>

int main(){

int num1,num2;

printf("\nprogram to print all numbers between given range.\n");

printf("\nEnter two numbers (range) for numbers printing:\n");

scanf("%d %d",&num1,&num2);

if(num1>num2)
{
    int num3 = num1;
    num1=num2;
    num2=num3;
}

printf("\n range of the numbers are between %d and %d\n",num1,num2);

while(num1<=num2)
{
    printf("%d\t",num1);
    num1++;
}

return 0;

}