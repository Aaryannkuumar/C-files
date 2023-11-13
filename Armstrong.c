#include<stdio.h>
#include<math.h>

int main(){

int start,end,sum,temp,digit,num;

printf("\nprogram to check armstrong number between enterd range.\n");

printf("Enter the two numbers for range:\t");

scanf("%d %d",&start,&end); // we entered starting and ending as range.

printf("\nThe armstrong numbers are:\t");

for(num=start;num<=end;num++)
{
    temp=num; // temporary story the number into another variable.

    sum=0;

    while (temp!=0)
    {
        digit = temp % 10; // digit extracted. , eg:- 4 of 124
        sum += pow(digit,3); // sum is getting added with extracted digit and the cube power.
        temp /= 10; // extracted digit get removed from number. , eg:- 123 from 1234. 
    }
    if(num==sum)
    {
        printf("%d\t",num);
    }

    
}


return 0;
}