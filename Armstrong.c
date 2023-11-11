#include<stdio.h>
#include<math.h>

int main(){

int start,end,sum,temp,digit,num;

printf("\nprogram to check armstrong number between enterd range.\n");

printf("Enter the two numbers for range:\t");

scanf("%d %d",&start,&end);

printf("\nThe armstrong numbers are:\t");

for(num=start;num<=end;num++)
{
    temp=num;

    sum=0;

    while (temp!=0)
    {
        digit = temp % 10;
        sum += pow(digit,3);
        temp /= 10;
    }
    if(num==sum)
    {
        printf("%d\t",num);
    }

    
}


return 0;
}