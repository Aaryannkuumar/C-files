#include<stdio.h>

int sum(int a, int b){

return a+b;

}

int main(){

int Num1,Num2;

printf("\nEnter the two numbers you want the sum of:\t");
scanf("%d %d",&Num1,&Num2);

printf("\nThe sum of %d and %d is : %d",Num1,Num2,sum(Num1,Num2));

return 0;


}