#include<stdio.h>
int fecto(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n*fecto(n-1);
}
int main()
{
    int no;   
    printf("Enter the value of the no: ");
    scanf("%d", &no); 
    printf("\n%d", fecto(no));
}