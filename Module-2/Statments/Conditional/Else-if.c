// WAP to check no is positive or note
#include<stdio.h>
int main() {

    int num;
    printf("Enter the value of no to check wether it's positive or not: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("%d is positive number.", num);
    }
    else if(num == 0)
    {
        printf("%d is neutral.", num);
    }
    else{
        printf("%d is a negative number.", num);
    }
    return 0;
}