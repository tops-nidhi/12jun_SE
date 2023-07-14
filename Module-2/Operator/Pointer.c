// Pointer use to store the address of te other variable
//WAP to store the address of the variable using pointer
#include<stdio.h>
int main()
{
    int a = 85;
    int *ptr;// create a pointer variable
    ptr = &a;
    printf("Address of the a is:%d", ptr);
    // ptr++;
    // printf("\nAddress of the a after increment is:%d ", ptr);
    printf("\nValue of the a is: %d", *ptr);
    *ptr = 15;
    printf("\nValue of the a is: %d", a);
    ++*ptr;
    printf("\nAfter increment value of the a is:%d", a);
    return 0;
}
