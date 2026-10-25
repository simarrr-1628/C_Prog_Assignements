#include<stdio.h>
int main()
{
    int a, b;

    printf("\nEnter 2 integers : ");
    scanf("%d %d", &a, &b);

    int *p = &a;
    int *q = &b;

    printf("\nAddition is : %d",*p + *q);
    printf("\nSubtraction is : %d",*p - *q);
    printf("\nMultiplication is : %d",*p * *q);
    printf("\nDivision is : %d",*p / *q);
    
}