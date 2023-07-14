// conditional/ Ternary operator
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of the a and b: ");// Take the value from the user
    scanf("%d%d", &a, &b);
    // Using ternary operator to check if both values are equal or not
    (a > b) ? (printf("A is max.")) : (printf("B is max."));
    return 0;
}