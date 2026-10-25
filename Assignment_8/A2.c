#include<stdio.h>
#include<string.h>
int main()
{
    int vowelcount = 0, i;
    char str[20];

    printf("\nEnter a string : ");
    scanf("%s", str);

    for(i=0; i<strlen(str); i++)
        {
            if(str[i] == 'a' || str[i] == 'A' || 
               str[i] == 'e' || str[i] == 'E' || 
               str[i] == 'i' || str[i] == 'I' || 
               str[i] == 'o' || str[i] == 'O' || 
               str[i] == 'u' || str[i] == 'U' )
            {
                vowelcount++;
            }
        }
    printf("\nThe string %s contains %d vowels.", str, vowelcount);
}
