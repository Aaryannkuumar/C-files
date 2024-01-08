#include<stdio.h>

int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
int divide(int a, int b){
    return a / b;
}

int main(){

int num1,num2;
char operator;

printf("\nEnter the calculation you want to get like --> 2 + 2\t");

scanf("%d %c %d",&num1,&operator,&num2);

int result;

switch (operator)
{
    case '+':result = add(num1,num2);
    break;
    case '-':result = subtract(num1,num2);
    break;
    case '*':result = multiply(num1,num2);
    break;
    case '/':result = divide(num1,num2);
    break;

default:printf("invalid operator.");
    break;
}


printf("\nresult = %d",result);

return 0;

}