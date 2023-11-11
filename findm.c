#include<stdio.h>
#include<math.h>

int main() {
    
int x,y,z,a,b;


for(int i = 1000; i <= 9999; i++)
{
    x = sqrt(i);
    if(x*x==i)
    {
        y= i / 100;
        z= i % 100;
        a= sqrt(y);
        b= sqrt(z);

        if(a*a==y && b*b==z)
        {printf("%d \n", i);
        }
    }
    return 0;
}



}
