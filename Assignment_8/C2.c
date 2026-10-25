#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i, j, count;

    printf("Enter a string : ");
    scanf("%s", str);

    int len = strlen(str);

    for(i=0; i<len; i++)
        {
            count = 1;
        
            int alreadyprinted = 0;
            for(j=0; j<i; j++)
            {
                if(str[i]==str[j])
                {
                    alreadyprinted = 1;
                    break;
                }
            }

        if(alreadyprinted == 0)
        {
            for(j=i+1; j<len; j++)
            {
                if(str[i] == str[j])
                {
                    count++;
                }
            }
                printf("\nCharacter %c occurs %d times\n", str[i], count);
            }
        }
    return 0;
        
    
}
