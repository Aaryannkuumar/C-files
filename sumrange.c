#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    if (end < start) {
        printf("End of the range should be greater than or equal to the start.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        sum = sum + i;
    }

    printf("Sum of numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}