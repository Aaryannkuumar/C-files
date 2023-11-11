#include <stdio.h>

int factorial(int n){
if(n==0 || n==1)
return 1;
else 
return n*factorial(n-1);

}

int main(){
int num;
printf("enter a non negative integer:\n");
scanf("%d", &num);
if(num<0)
    printf("factorial is not define for negative number.\n");
    else
    printf("factorial of %d is %d:",num,factorial(num));

return 0;
}


