#include<stdio.h>

int main(){

int a , b ,c ;

printf("\nenter the numbers for swapping:\t");
scanf("%d %d",&a,&b);
printf("inputted numbers are\t %d %d",a,b);

c=a;
a=b;
b=c;

printf("\nSwapped numbers are:\t %d %d",a,b);
return 0;


}