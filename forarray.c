#include<stdio.h>

int main(){

int numbers[5]={10,20,30,40,50};
int sum=0;

printf("numbers are:\n");
for(int i=0;i<5;i++){
    printf("%d\n",numbers[i]);
    sum+=numbers[i];
}
printf("sum of the numbers are:%d",sum);

return 0;

}