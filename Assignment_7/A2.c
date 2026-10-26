#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char str2[20];

    printf("\nEnter string 1 : ");
    scanf("%s",str);

    printf("\nEnter string 2 : ");
    scanf("%s",str2);

    int len1 = strlen(str);
    int len2 = strlen(str2);

    if(len1 > len2)
    {
        printf("\nConcatenated string : %s", strcat(str,str2));
    }
    else
    {
        printf("\nConcatenated string : %s", strcat(str2,str));
    }
}