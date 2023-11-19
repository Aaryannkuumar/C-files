#include<stdio.h>
#include<stdlib.h>

int main(){
int size;

printf("\nEmployee 1:\n");

printf("Enter the mumber of character in you E-id:\t");

scanf("%d",&size);

char* ptr = (char*)calloc(size,sizeof(char));

printf("\nEnter your character id :\t");

scanf("%s",ptr);



printf("\nEmployee 2:\n");

printf("Enter the mumber of character in you E-id:\t");

scanf("%d",&size);

char* ptr1 = (char*)calloc(size,sizeof(char));

printf("\nEnter your character id :\t");

scanf("%s",ptr1);



printf("\nEmployee 3:\n");

printf("Enter the mumber of character in you E-id:\t");

scanf("%s",&size);

char* ptr2 = (char*)calloc(size,sizeof(char));

printf("\nEnter your character id :\t");

scanf("%s",ptr2);


printf("\nIn ABC company:\n");

printf("E-id of Employee 1 is : %s\n",ptr);
printf("E-id of Employee 2 is : %s\n",ptr1);
printf("E-id of Employee 3 is : %s\n",ptr2);


 free(ptr);
 free(ptr1);
 free(ptr2);
 
return 0;
}