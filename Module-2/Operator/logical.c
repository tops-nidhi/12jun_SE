/*
    && - Logical AND
    // || - logical OR
    // ! - logical not
*/
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: "); //Taking input from user
    scanf("%d%d",&a,&b);
    if(!( a>0 || b<0))
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}