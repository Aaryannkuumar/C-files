#include<stdio.h>

int main(){
    int aadhar[5];
    
    int *ptr = &aadhar[0];
    int i;
    for(i=0; i<5; i++) {
        printf(" %d index : " , i );
        scanf("%d", (ptr+i));
    }

    for(i=0; i<5; i++) {
        printf("%d index = %d\n" , i , *(ptr+i));

    }

    return 0;
}