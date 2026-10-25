#include<stdio.h>
#include<string.h>
int main()
{
    char str[20], cpystr[20];
    printf("\nEnter a string : ");
    scanf("%s", str);

    strcpy(cpystr, str);
    printf("\nCoppied string : %s", cpystr);
    
}