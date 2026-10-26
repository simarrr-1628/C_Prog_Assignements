#include<stdio.h>
int main()
{
    char str[20];
    char temp;

    printf("\nEnter a string : ");
    scanf("%s", str);

    char *start = str;
    char *end = str;
    while(*end != '\0')
        {
            end++;
        }
    end--;

    while(start < end)
        {
            temp = *start;
            *start = *end;
            *end = temp;

            start++;
            end--;
        }
    printf("\nReversed string : %s", str);
}
