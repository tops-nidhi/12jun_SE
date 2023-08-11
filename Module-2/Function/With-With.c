#include<stdio.h>
int data(int no) //call by value
{
    return no;
}
int reference(int *p) //call by reference
{
    printf("\nAddress is: %d", p);
    return 0;
}
int main()
{
    int no =100;
    printf("Enter the value of no: ");
    scanf("%d", &no);
    printf( "%d",data(no));
    reference(&no);
    return 0;
}