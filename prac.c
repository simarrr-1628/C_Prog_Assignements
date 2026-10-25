#include <stdio.h>

int main() 
{
    float X, sum = 0.0;
    int n, odd = 1;

    printf("Enter a real number (X): ");
    scanf("%f", &X);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (1/n + 2/n*2 + 3/x * 3/x * 3/x);
        odd = odd + 2;        
    }

    printf("\nThe sum of the first %d terms is: %.2f\n", n, sum);

    return 0;
}

// o/p :
// Enter a real number (X): 1
// Enter the number of terms (n): 3

// The sum of the first 3 terms is: 9.00

//1 + 3.1 + 5.1

#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    float sal;
};
int main()
{
    int i, n;
    float grosssal, HRA, DA;

    printf("\nEnter the no. of employees : ");
    scanf("%d", &n);
    struct emp e[n];

    printf("\nEnter the details of the employees.");

    for(i=0; i<n; i++)
        {
            printf("\nEnter Id : ");
            scanf("%d", &e[i].id);

            printf("\nEnter name : ");
            scanf("%s", e[i].name);

            printf("\nEnter sal : ");
            scanf("%f", &e[i].sal);

            HRA = e[i].sal * 0.20;
            DA = e[i].sal * 0.10;
            grosssal = e[i].sal + HRA + DA;

            printf("\nEmployee ID : %d", e[i].id);
            printf("\nEmployee name : %s", e[i].name);
            printf("\nEmployee HRA : %2.f", HRA);
            printf("\nEmployee DA : %2.f", DA);
            printf("\nEmployee Gross salary : %2.f", grosssal);
        }
}
