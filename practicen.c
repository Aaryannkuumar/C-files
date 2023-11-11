#include <stdio.h>
#include <string.h>

void reverseString(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Original string: %s", str);

    reverseString(str);

    printf("Reversed string: %s", str);

    return 0;
}

void reverseString(char *str) {
    int length = strlen(str) - 1;  // Subtract 1 to remove the newline character from fgets
    char reversed[length + 1];  // +1 for null terminator

    int i, j;
    for (i = 0, j = length - 1; j >= 0; i++, j--) {
        reversed[i] = str[j];
    }
    reversed[i] = '\0';

    strcpy(str, reversed);
}
