#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i; 
    int *ptr;

    printf("\nEnter the no of integers : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d integers : ", n);
    for(i=0; i<n; i++)
        {
            scanf("%d",&ptr[i]);
            printf("Element at index %d = %d\n", i, ptr[i]);
        }
    free(ptr);
    return 0;

}
