#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = &arr[n - 1];

    printf("\nArray elements in reverse order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr); 
        ptr--;      
    }
    printf("\n");

    return 0;
}