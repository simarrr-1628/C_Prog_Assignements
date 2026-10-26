#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n;
    int *ptr;

    printf("\nEnter the number of integers : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("\nMemory allocation failed");
        return 1;
    }

    printf("Enter %d integers : ", n);
    for(i=0; i<n; i++)
        {
            scanf("%d",&ptr[i]);
        }

    printf("\nThe integers in reverse order are : ");
    for(i=n-1; i>=0; i--)
        {
            printf("%d ",ptr[i]);
        }
    printf("\n");

    free(ptr);
    return 0;
}
