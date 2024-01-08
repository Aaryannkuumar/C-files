#include<stdio.h>


int is_prime(int number){

if(number<2)
{
    return 0; // not a prime.
}
for(int i=2;i*i<=number;i++) // took square root of number because we dont need to run loop till the number.
{
    if(number%i==0)
    {
        return 0; //  not a prime.
    }
}
return 1; // prime number.
}

int main(){

int n;
int primes[100];
int prime_count=0;

printf("\nProgram to print prime numbers upto given range.");
scanf("%d",&n);

for(int i=0;i<n;i++) // finding prime numbers and storing it in array.
{
    if(is_prime(i))
    {
     primes[prime_count]=i;
     prime_count++; 
    }
}

for(int i=0;i<prime_count;i++) // printing stored prime numbers in array.
{
    printf("%d\n",primes[i]);
}

int sum=0;

for(int i=0;i<prime_count;i++) // printing sum of stored prime numbers.
{
    sum += primes[i];
}

printf("\nsum of prime numbers is %d",sum);

return 0;

}