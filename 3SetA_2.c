#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1; // It is a prime number
}

int main() {
    int num;

    while (1) {
        printf("Enter an integer (or enter -1 to quit): ");
        scanf("%d", &num);

        if (num == -1) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (is_prime(num)) {
            printf("%d is a PRIME number.\n\n", num);
        } else {
            printf("%d is NOT a prime number.\n\n", num);
        }
    }

    return 0;
}