#include<stdio.h>
/* if user enter 3 
type-->  3 
       3 2 3
     3 2 1 2 3
   3 2 1 0 1 2 3*/

int main(){

int n;

printf("\nEnter the size of triangle:\t");

scanf("%d",&n);

int q = n + 1;


for(int i=0;i<=n;i++) // this calculates no. of rows. As we want 4 rows but number should start from 3 so we take 0 to <=n.
{
  for(int j=1;j<=n-i;j++) // this print no. of spaces that required according to pattern.
  {
    printf(" ");
  }   
  for(int k=1;k<=i+1;k++) // this print descending numbers part of pattern. loop is from 1 to row number(as required in pattern).
  {
    printf("%d",q-k);
  }
  for(int l=i+1;l<=n;l++)
  {
    printf("%d",l);
  }

  printf("\n");
   
}


return 0;



}