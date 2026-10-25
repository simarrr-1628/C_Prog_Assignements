#include<stdio.h>
int main()
{
    int a, b;

    printf("\nEnter an integer : ");
    scanf("%d", &a);

    int *p = &a;
    if(*p %2 == 0)
    {
        printf("\n%d is even",*p);
    }
    else
    {
        printf("\n%d is odd", *p);
    }
}