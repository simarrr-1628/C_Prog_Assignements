#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr = (int *)malloc(10 * sizeof(int));

    if(ptr == NULL)
    {
        printf("\nMemory allocation failed");
        return 1;
    }

    printf("\nEnter 5 integers : ");
    for(int i=0; i<5; i++)
        {
            scanf("%d", &ptr[i]);
        }

    printf("\nThe integers are : ");
    for(int i=0; i<5; i++)
        {
            printf("%d ", ptr[i]);
        }
    printf("\n");

    free(ptr);
    return 0;
    
}