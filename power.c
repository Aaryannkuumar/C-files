#include<stdio.h>
#include<math.h>

int main(){
long double number,power;

printf("\nEnter the number and the power :\t");

scanf("%Lf %Lf",&number,&power);

long double result = pow(number,power);

printf("The number is:%Lf",result);

return 0;

}