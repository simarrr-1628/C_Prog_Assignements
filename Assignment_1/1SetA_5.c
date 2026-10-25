#include<stdio.h>
void main()
{
    int x, count = 0;
    printf("\nEnter an integer : ");
    scanf("%d", &x);
   
   while(x!=0)
   {
    x = x/10;
    count++;
    }
    printf("No. of digits in the number is : %d", count);
}