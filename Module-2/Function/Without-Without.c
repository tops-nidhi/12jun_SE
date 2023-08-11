#include<stdio.h>
int no;
void getdata()
{
    printf("Enter the number:");
    scanf("%d", &no);
}
void showdata()
{
    printf("\nValue of the no is: %d", no);
}
int main()
{
    getdata();
    showdata();
    return 0;
}