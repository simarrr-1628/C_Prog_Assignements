#include<stdio.h>
void main()
{
    int i, n;
    printf("\nEnter an integer : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
        }
    }
}