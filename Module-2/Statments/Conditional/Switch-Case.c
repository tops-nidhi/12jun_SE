// WAP to take calculator
#include<stdio.h>
int main()
{
    int ch, a, b;
    printf("Enter the value fo the a and b: ");
    scanf("%d%d", &a, &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            printf("\nAddition of the a and b is: %d", a+b);
            break;
        case 2:
            printf("\nSubtraction of the a and b is: %d", a - b);
            break;
        case 3:
            printf("\nMultiplication of the a nad b is: %d" , a * b);
            break;
        case 4:
            printf("\nDivision of the a and b is: %d", a /b);
            break;
        default:
            printf("\nEnter valid choice..........");
            break;
    }
    return 0;
}