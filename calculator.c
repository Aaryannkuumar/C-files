#include<stdio.h>

int main(){
char operator;
float operand1,operand2,result;

printf("enter the operator(+,-,*,/):\n");
scanf("%c",&operator);

printf("enter operand1 and operand2:\n");
scanf("%f %f", &operand1, &operand2);

switch(operator){

case'+':
result=operand1+operand2;
printf("result:%.2f\n",result);
break;

case'-':
result=operand1-operand2;
printf("result:%.2f\n",result);
break;

case'*':
result=operand1*operand2;
printf("result:%.2f\n",result);
break;

case'/':
if (operand2==0){
    printf("error : divison by zero");
} else 
{
    result=operand1/operand2;
    printf("result:%.2f\n",result);
}
break;

default:
printf("error : invalid operator\n");
break;
}
    return 0;
}