/*
    & - Bitwise AND
    | - Bitwise OR
    ^ - XOR (exclusive or)
    ~ - Bitwise Compliment
    << - shift left
    >> - shift right
*/
#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of the  2variable:");
    scanf("%d%d", &a, &b);
    printf("\nBitwise AND:%d", a&b);
    printf("\nBitwise or:%d", a|b);
    printf("\nBitwise XOR is: %d\n", a^b);
    printf("Bitwise compliment: %d", ~a);    
    printf("\nShift left: %d\n", a<<1);
    printf("Shift Right : %d ", a>>1);
}   