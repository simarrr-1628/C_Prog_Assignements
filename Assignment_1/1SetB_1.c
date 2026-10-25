#include<stdio.h>
int main() 
{
    float X, sum = 0.0;
    int n, odd = 1;

    printf("Enter a real number (X): ");
    scanf("%f", &X);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (odd * X);
        odd = odd + 2;        
    }

    printf("\nThe sum of the first %d terms is: %.2f\n", n, sum);

    return 0;
}

// o/p :
// Enter a real number (X): 1
// Enter the number of terms (n): 3

// The sum of the first 3 terms is: 9.00

//1 + 3.1 + 5.1