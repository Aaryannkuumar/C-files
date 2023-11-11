#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int id;
    float marks;
};


int main(){

struct student s1,s2,s3;

strcpy(s1.name,"Aryan");
s1.id = 23;
s1.marks = 56.7;

printf("The name of student 1 is %s\n",s1.name);
printf("The marks of student 1 is %f\n",s1.marks);
printf("The id of student 1 is %d",s1.id);

return 0;




}