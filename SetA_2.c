#include<stdio.h>
void main()
{
    int i, x, y, sum = 0;
    printf("\nEnter 1st integer : ");
    scanf("%d", &x);
    printf("\nEnter 2nd integer : ");
    scanf("%d", &y);
    
    for(i=x; i<=y; i++)
    {
        sum += i;
    }
    printf("\nSum : %d", sum);
}