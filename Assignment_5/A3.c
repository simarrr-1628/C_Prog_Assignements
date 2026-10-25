#include<stdio.h>
int main()
{
    int a, b;

    printf("\nEnter 2 integers : ");
    scanf("%d %d", &a, &b);

    int *p = &a;
    int *q = &b;

    if(*p > *q)
    {
        printf("\%d is maximum",*p);
    }
    else
    {
        printf("\n%d is maximum",*q);
    }
}