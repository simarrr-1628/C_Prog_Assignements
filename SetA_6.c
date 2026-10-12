#include<stdio.h>
void main()
{
    int x;
    char c;
    printf("Enter a character : ");
    scanf("%c", c);
    printf("\nEnter an integer : ");
    scanf("%d", &x);
   
   for(int i = 0; i<x; i++)
   {
    printf("%c",c);
    c++;
   }
}