#include <stdio.h>
int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, num;

    printf("How many numbers do you want to check? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (is_even(num)) {
            printf("%d is EVEN.\n\n", num);
        } else {
            printf("%d is ODD.\n\n", num);
        }
    }

    return 0;
}