#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    float sal;
};
int main()
{
    int i;
    struct emp e[3];
    printf("\nEnter employee details.");
    for(i=0; i<3; i++)
        {
            printf("\nEnter employee id : ");
            scanf("%d",&e[i].id);

            printf("\nEnter employee name : ");
            scanf("%s",e[i].name);

            printf("\nEnter employee sal : ");
            scanf("%f",&e[i].sal);
        }
    for(i=0; i<3; i++)
        {
            printf("\nEmployee ID : %d",e[i].id);
            printf("\nEmployee name : %s",e[i].name);
            printf("\nEmployee sal : %2.f",e[i].sal);
        }
    return 0;
}
