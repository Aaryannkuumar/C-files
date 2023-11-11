#include<stdio.h>
#include<math.h>

int main(){
int a,b,square;

printf("enter a number:");
scanf("%d", &a);
square = pow(a,2);
printf("square of the number:%d",square);
return 0;

}