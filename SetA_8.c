#include <stdio.h>

int main() {
    int start = 2;
    int end = 9;
    int multiples = 10;

    printf(" MULTIPLICATION TABLES FROM %d TO %d \n\n", start, end);

    for (int i = 1; i <= multiples; i++) {
        
        for (int j = start; j <= end; j++) {
            
            printf("%d x %d = %d\t", j, i, j * i);
        }
        
        printf("\n");
    }

    return 0;
}