#include<stdio.h>
int len(char str[20])
{
    int len=0;
    while(str[len] != '\0')
        {
            len ++;
        }
    printf("\nLength of the string is : %d", len);
}
int main()
{
    char str[20];

    printf("Enter a string : ");
    scanf("%s",str);

    len(str);
    return 0;
}