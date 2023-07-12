// Pointer use to store the address of te other variable
//WAP to store the address of the variable using pointer
#include<stdio.h>
int main()
{
    int a = 100;
    int *ptr;// create a pointer variable
    ptr = &a;
    printf("Address of the a is:%d", ptr);
    ptr++;
    printf("Address of the a after increment is:%d ", ptr);
    return 0;
}
