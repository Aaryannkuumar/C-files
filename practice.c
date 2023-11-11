#include<stdio.h>

int main(){

int digit,sum=0,num;

printf("Enter a number:");
scanf("%d", &num);

while(num !=0)
{
    digit = num % 10;
    sum+= digit;
    num/=10;
}
printf("the sum of digit is:%d", sum);
return 0;

}