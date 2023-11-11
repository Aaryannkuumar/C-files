#include<stdio.h>


int factorial(int a);

int main(){
    int n;
printf("Enter the number:");
scanf("%d",&n);
if(n<0){
    printf("Error: enter a positive number");
}
else{
    int result= factorial(n);
    printf("the factorial of the number is : %d",result);
}

}

int factorial(int a){
    if(a == 0 || a == 1)
    {return 1;}
    else{
        return a * factorial(a-1);
    }


}