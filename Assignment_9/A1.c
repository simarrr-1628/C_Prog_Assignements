#include<stdio.h>
struct emp
{
    int id;
    char name [20];
    float sal;
};
int main()
{
    int n, i;
    printf("\nEnter the number of employees : ");
    scanf("%d",&n);

    struct emp e[n];

    
    for(i=0; i<n; i++)
    {
        printf("\nEnter the details of %d employees : ",i+1);
        printf("Enter ID : ");
        scanf("%d", &e[i].id);

        printf("Enter name : ");
        scanf("%d", e[i].name);

        printf("Enter sal : ");
        scanf("%d", &e[i].sal);
        
    }

    printf("\nSummary of eployee details : ");
    for(i=0; i<n; i++)
    {
        printf("\nEmployee ID : %d", e[i].id);
        printf("\nEmployee name : %s", e[i].name);
        printf("\nEmployee sal : %f", e[i].sal);
        
    }
}