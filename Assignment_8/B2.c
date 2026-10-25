#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];

    printf("\nEnter 1st string : ");
    scanf("%s", str1);

    char *start = str1;
    char *end = str1;

    while(*end != '\0')
        {
            end++;
        }
    end--;

    int isPalindrome = 1; //true

    while(start < end)
        {
            if(*start != *end)
            {
                isPalindrome = 0; //not palindrome
                break;
            }
            start++;
            end--;
        }

    if(isPalindrome == 1)
    {
        printf("\nString %s is palindrome.", str1);
    }
    else
    {
        printf("\nString %s is not a palindrome.", str1);
    }
    return 0;
}