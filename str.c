#include <stdio.h>
#include <string.h>

int main() {
    char First[200], last[100]; // Increased the size of First to accommodate both names
    printf("Enter your first name:\t");
    scanf("%s", First);
    printf("Enter your last name:\t");
    scanf("%s", last);
    
    strcat(First, " "); // Add a space between the first and last names
    strcat(First, last);

    printf("Hello, %s!", First);
    
    
    return 0;

}
