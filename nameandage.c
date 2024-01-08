#include<stdio.h>
#include<string.h>

int printinfo(char *name, int age)
{
    printf("Your name is %s and your age is %d",name,age);
}

int main(){
char name[199];
int age;

printf("\nEnter your name:\t");
fgets(name,sizeof(name),stdin);

printf("\nEnter your age:\t");
scanf("%d",&age);

printinfo(name,age);

return 0;




}