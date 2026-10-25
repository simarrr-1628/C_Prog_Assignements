#include<stdio.h>
#include<string.h>
int searchchar(char *p, char search)
{
    int counter = 0;
    while(*p != '\0')
        {
            if(search == *p)
            {
                counter++;
            }
            p++;
        }
    return counter;
}
int main()
{
    char str[20];
    char search;

    printf("\nEnter a String : ");
    scanf("%s",str);

    char *p = str;

    printf("\nEnter a character to search : ");
    scanf(" %c",&search);

    int result = searchchar(p,search);
    printf("\nNumber of times %c appeared in %s is : %d", search, str, result);
    
}