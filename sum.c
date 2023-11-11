#include<stdio.h>

int sum(int a, int b);

int main(){
int a ,b;
printf("enter the numbers:");
scanf("%d %d",&a,&b);
printf("sum of two numbers is : %d\n",sum(a,b));
printf("sum of 2 and 2 is:%d\n",sum(2,2));

return 0;
}
int sum(int a,int b){

    int result=a+b;
return result;
}