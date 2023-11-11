#include<stdio.h>


int fact(int);

int main(){
int x;
printf("Enter the number:");
scanf("%d",&x);
int factorial=fact(x);
printf("the Factorial of number %d is = %d",x,factorial);
return 0;


}
int fact(int num){
int factorial=1;
for(int i=1;i<=num;i++){
    factorial=factorial*i;
    
}
return factorial;
}