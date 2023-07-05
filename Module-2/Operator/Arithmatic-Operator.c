#include<stdio.h>
int main(){
    int a, b;
    int ans;
    printf("Enter the value:\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    ans = a + b;
    printf("\nAddition of the a and b is: %d", ans);
    printf("\nSubtraction: %d", a-b);
    printf("\nMultiplication of the a and b is: %d", a*b);
    printf("\nDivision of the a and  b is: %f", (float)a/ (float)b);
    printf("\nModulo: %d", a%b);
    return 0;
}

