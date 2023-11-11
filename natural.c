#include<stdio.h>

int main(){

int a,sum=0;



printf("\nEnter the nth number:\n");
scanf("%d" , &a);

for(int i=1 ; i <= a ; i++){
sum += i;
}
printf("Sum of natural numbers are:%d\n", sum);

return 0;


}