#include<stdio.h>
struct book
{
    int bid;
    char bname[20];
    int publishyear;
};
void display(struct book b)
{
    printf("\nBook deatils : ");
    printf("\nBook ID : %d",b.bid);
    printf("\nBook name : %s",b.bname);
    printf("\nBook publish year : %d",b.publishyear);
}
int main()
{
    struct book b = {102, "Harry Potter", 2005};
    display(b);
    return 0;
}