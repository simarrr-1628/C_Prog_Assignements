#include<stdio.h>
int main()
{
    char str1[20] = "Right";
    char str2[20] = "Wrong";

    char *p = str1;
    char *q = str2;

    int flag = 0;

    while(*p != '\0' || *q != '\0')
        {
            if(*p != *q)
            {
                flag = 1;
                break;
            }
            p++;
            q++;
        }
    
   if(flag == 0)
   {
       printf("\nBoth Strings are equal");
   }
   else
   {
       printf("\nBoth Strings are not equal");
   }
    
    return 0;
}
