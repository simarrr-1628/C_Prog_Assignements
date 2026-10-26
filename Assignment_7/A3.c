#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char search;
    int flag = 0;

    printf("\nEnter a string : ");
    scanf("%s",str);

    printf("\nEnter a charachter to search for in the string : ");
    scanf(" %c", &search);

    char *p = str;
    while(*p != '\0')
        {
            if(*p == search)
            {
               flag = 1;
               break;
            }
            p++;
        }

    if(flag == 1)
    {
        printf("\nCharacter %c is present in the string %s",search,str);
    }
    else
    {
        printf("\nCharacter %c is not present in the string %s",search,str);
    }
    
    return 0;
}
