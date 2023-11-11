#include<stdio.h>

float square(float);

int main(){
float x;
printf("Enter the number:");
scanf("%f",&x);
float result = square(x);
printf("The square of %f is = %f\n",x,result);
return 0;

}

float square(float a)
{
    float y = a*a;
    return y;
}