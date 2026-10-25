#include<stdio.h>
void ucase(char *str) //this (*str) holds the value
{
    while(*str != '\0')
        {
            if(*str >= 'a' && *str <= 'z')
            {
                *str = *str - 32;
            }
            str++; //this (str) is the memory address because (*) is not used here
        }
}
int main()
{
    char str[20]; 

    printf("\nEnter a string : ");
    scanf("%s",str);
    
    ucase(str);

    printf("Uppercase string : %s",str);

    return 0;
}
