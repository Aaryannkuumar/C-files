#include<stdio.h>

int main(){

float basic_pay,DA,HRA,GrossSalary;

printf("\nProgram to find gross salary.\n");

printf("Enter the basic pay of a person:\t");
scanf("%f",&basic_pay);

if(basic_pay>25000)
{
    HRA = 20;
    DA = 50;
}
else
{
    HRA = 15;
    DA = 25;
}
GrossSalary = basic_pay + basic_pay*HRA/100 + basic_pay*DA/100;

printf("The gross salary after %.2f of HRA and %.2f of DA is %.2f",basic_pay*HRA/100,basic_pay*DA/100,GrossSalary );
return 0;
}