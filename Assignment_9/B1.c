#include<stdio.h>
struct item
{
    int ino;
    char iname[20];
    float irate;
    int iqty;
    float itotal;
};
int main()
{
    int i, n, grandtotal = 0;

    printf("\nEnter no. of items : ");
    scanf("%d", &n);
    struct item it[n];

    for(i=0; i<n; i++)
        {
            printf("\nEnter details for %d item", i+1);

            printf("\nEnter Item no. : ");
            scanf("%d",&it[i].ino);

            printf("\nEnter Item name : ");
            scanf("%s",it[i].iname);

            printf("\nEnter Item rate : ");
            scanf("%f",&it[i].irate);

            printf("\nEnter Item qty. : ");
            scanf("%d",&it[i].iqty);

            it[i].itotal = it[i].iqty * it[i].irate;
        }
    printf("\nBill");
    printf("\nSrNo.\tItem Name\tRate\tQty \tTotal");
    for(i=0; i<n; i++)
        {
            
            printf("\n%d   \t%s        \t%2.f   \t%d    \t%2.f    ", it[i].ino, it[i].iname, it[i].irate, it[i].iqty, it[i].itotal);
            grandtotal += it[i].itotal;
        }
    printf("\n\t\t\tGrand Total : %d",grandtotal);
    return 0;
}
