#include<stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
struct emp
{
    int id;
    char name[20];
    struct date jd; //nested structure
};
int main()
{
    int i, n, searchmonth, found = 0;

    
    printf("Enter the no. of employees : ");
    scanf("%d", &n);
    struct emp e[n];

    for(i=0; i<n; i++)
    {
        printf("\nEnter the details if %d employee", i+1);

        printf("\nEnter ID : ");
        scanf("%d", &e[i].id);

        printf("\nEnter name : ");
        scanf("%s", e[i].name);
    
        printf("\nEnter joining date (DD-MM-YYYY) : ");
        scanf("%d %d %d", &e[i].jd.dd, &e[i].jd.mm, &e[i].jd.yy);
    }
    
    printf("\nEnter month number to search : ");
    scanf("%d", &searchmonth);

    for(i=0; i<n; i++)
        {
            if(e[i].jd.mm == searchmonth)
            {
                printf("\nEmployee ID : %d",e[i].id);
                printf("\nEmployee name : %s",e[i].name);
                printf("\nEmployee joining date : %d/%d/%d",e[i].jd.dd, e[i].jd.mm, e[i].jd.yy);
                found = 1;
                
            }
        }
    if (found = 0)
    {
        printf("\nNo employees who joined in %d month",searchmonth);
    }
    return 0;
}
