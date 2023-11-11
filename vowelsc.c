#include<stdio.h>
#include<string.h>

int countVowels(char *str); // this program count the vowels in entered string.


int main() {
    char str[100];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    int vowelcount = countVowels(str);
    printf("Number of vowels in string are: %d\n", vowelcount);

    return 0;
}

int countVowels(char *str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U') {
            count++;
        }
    }

    return count;
}
