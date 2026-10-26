#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];

    printf("\nEnter a string : ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while(str[i] != '\0' && str[i] != '\n')
        {
            if(str[i] == ' ')
            {
                str[i] = '*';
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                str[i] = '?';
            }
             i++;   
        }
    printf("\nAltered String : %s", str);
    return 0;
}