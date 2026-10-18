#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int temp_max = max(num1, num2);

    int greatest = max(temp_max, num3);

    printf("The maximum number is: %d\n", greatest);

    return 0;
}