#include<stdio.h>
void main()
{
    int x, y, i, is_prime;
    printf("\nEnter start integer : ");
    scanf("%d", &x);
    printf("Enter end integer : ");
    scanf("%d", &y);
   
    for(i=x; i<=y; i++)
    {
        if(i == 0 || i == 1)
        {
            is_prime = 0;
        }
        else   
        {
            is_prime=1;
            for(int j = 2; j<i; j++)
            {
                if(i % j == 0)
                {
                   is_prime = 0;
                   break;
                }
            }
        }
        
        if(is_prime == 1)
        {
            printf("%d is a prime number \n", i);
        }   
    }
}
    
