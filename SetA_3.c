#include<stdio.h>
#include<math.h>
void main()
{
    int t, x, y;
    printf("\nEnter 1st integer : ");
    scanf("%d", &x);
    printf("\nEnter 2nd integer : ");
    scanf("%d", &y);
    
    t = pow(x, y);
    printf("X to the power of y : %d", t);
}