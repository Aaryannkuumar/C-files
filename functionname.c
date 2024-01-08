#include<stdio.h>
#include<string.h>

int getName(char *name){

printf("\nEnter your name:\t");

fgets(name,100,stdin); // here we have to write actual size of string.

// Remove the trailing newline character from the string 
name[strcspn(name,"\n")]=0;

}

int main(){
char name[100];

getName(name);

printf("\nYour name is:%s",name);

return 0;


}