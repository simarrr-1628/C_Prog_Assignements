#include<stdio.h>
#include<string.h>
int main()
{
    int ch;
    char str[20], str2[20];

    do
        {
            printf("\n1.Copy String\n2.Concatenate String.\n3.Find Length String.\n4.Reverse String\n5.Exit");
            printf("\nEnter your choice : ");
            scanf("%d", &ch);

            switch(ch)
                {
                    case 1:
                    printf("\nEnter a String : ");
                    scanf("%s", str);

                    strcpy(str2, str); //coppies 2 to 1
                    printf("\nCoppied string : %s", str2);
                    break;

                    case 2:
                    printf("\nEnter 1st string : ");
                    scanf("%s", str);

                    printf("Enter 2nd string : ");
                    scanf("%s", str2);

                    strcat(str,str2); //appends 2 to 1
                    printf("\nConcatenated string : %s\n", str);
                    break;

                    case 3:
                    printf("Enter a string : ");
                    scanf("%s", str);

                    int len = strlen(str);
                    printf("\nLength of string is : %d", len);
                    break;

                    case 4:
                    printf("Enter a string : ");
                    scanf("%s", str);

                    for(int i = strlen(str); i>=0; i--)
                        {
                            printf("\n%c", str[i]);
                        }
                    break;

                    case 5: 
                    break;

                    default:
                    printf("\nEnter a valid choice : ");
                }
        }while(ch != 5);
    return 0;
}
