#include<stdio.h>
void main()
{
    int x, i;
    printf("\nEnter an integer : ");
    scanf("%d", &x);
   
    if(x <= 1)
    {
        printf("%d is not a prime number.\n", x);
    }
    if(x == 2)
    {
        printf("%d is a prime number\n", x);
    }
    for(i>2; i<=x; i++)
    {
        if(x % i == 0)
        {
            printf("%d is not a prime number\n", x);
            break;
        }
        
        else
        {
            printf("%d is a prime number.\n", x);
            break;
        }
    }
}