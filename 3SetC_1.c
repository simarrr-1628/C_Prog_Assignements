#include<stdio.h>

int fib(int n) {

    if (n == 1 || n == 2) {
        return 1;
    }
    
    return fib(n - 2) + fib(n - 1);
}

int main() {
    int n;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}