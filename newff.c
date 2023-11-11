#include <stdio.h>

int main() {
    printf("Welcome to Himalayan bank\n");

    int account_number = 54321; 
    int password = 9876;  
    int balance = 25000; 
    int choice;
    int user_account, user_password;
    int deposit_amount, withdraw_amount;
    int start, end, i;
    int start_range, end_range, j, sum = 0;
    int account = user_account;
    int digitCount = 0;
    int num_fibonacci, first = 0, second = 1, next, k;

    printf("Enter your account number: ");
    scanf("%d", &user_account);

    printf("Enter your password: ");
    scanf("%d", &user_password);

    if (user_account == account_number && user_password == password) {
        do {
            printf("\nMain Menu\n");
            printf("1. Check balance\n");
            printf("2. Deposit money\n");
            printf("3. Withdraw money\n");
            printf("4. Exit\n");
            printf("5. Numbers divisible by 5\n");
            printf("6. Sum of numbers\n");
            printf("7. Counting digits\n");
            printf("8. Fibonacci series\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Your current balance: %d\n", balance);
                    break;
                case 2:
                    printf("Enter the amount you want to deposit: ");
                    scanf("%d", &deposit_amount);
                    balance += deposit_amount;
                    printf("Deposit successful. Your new balance: %d\n", balance);
                    break;
                case 3:
                    printf("Enter the amount you want to withdraw: ");
                    scanf("%d", &withdraw_amount);
                    if (withdraw_amount <= balance) {
                        balance -= withdraw_amount;
                        printf("Withdrawal successful. Your new balance: %d\n", balance);
                    } else {
                        printf("Insufficient funds.\n");
                    }
                    break;
                case 5:
                    printf("Enter the start and end numbers: ");
                    scanf("%d %d", &start, &end);
                    for (i = start; i <= end; i++) {
                        if (i % 5 == 0) {
                            printf("%d is divisible by 5.\n", i);
                        }
                    }
                    break;
                case 6:
                    printf("Enter the start and end numbers: ");
                    scanf("%d %d", &start_range, &end_range);
                    for (j = start_range; j <= end_range; j++) {
                        sum += j;
                    }
                    printf("Sum of numbers in range: %d\n", sum);
                    break;
                case 7:
                    while (account != 0) {
                        digitCount++;
                        account /= 10;
                    }
                    printf("Number of digits in your account number: %d\n", digitCount);
                    break;
                case 8:
                    printf("Enter the number of Fibonacci series: ");
                    scanf("%d", &num_fibonacci);
                    printf("Fibonacci series: ");
                    for (k = 0; k < num_fibonacci; k++) {
                        if (k <= 1) {
                            next = k;
                        } else {
                            next = first + second;
                            first = second;
                            second = next;
                        }
                        printf("%d ", next);
                    }
                    printf("\n");
                    break;
                case 4:
                    printf("Thank you for using xyz bank. Goodbye.\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != 4);
    } else {
        printf("Invalid account number or password. Access denied.\n");
    }

    return 0;
}
