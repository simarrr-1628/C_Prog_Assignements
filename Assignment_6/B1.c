#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n;
    int *ptr;

    printf("\nEnter number of elements of the array : ");
    scanf("%d",&n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("\nEnter array elements : ");
    for(i=0; i<n; i++)
        {
            scanf("%d", &ptr[i]);
        }

    int max = *ptr;

    for(i=0; i<n; i++)
        {
            if(ptr[i] > max)
            {
                 max = ptr[i];
            }    
        }
    printf("\nThe maximum element from the array is : %d", max);
    
}
