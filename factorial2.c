#include<stdio.h>

int main(){
long int a, b=1;
printf("program to print factorial of a number.\n");

printf("My program jj");

printf("\nenter the number that you want factorial of:\t");
scanf("%ld",&a);

for(int i=a;i>=1;i--)
{
    b = b*i;
}
printf("%ld",b);

return 0;

}