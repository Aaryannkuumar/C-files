#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    int n;
    int sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2)
            sum += i;
    } else {
        printf(ANSI_COLOR_RED "\nPlease enter an even number" ANSI_COLOR_RESET "\n");
        return 0;
    }

    printf("\nSum of even numbers: " ANSI_COLOR_RED "%d" ANSI_COLOR_RESET "\n", sum);

    return 0;
}
