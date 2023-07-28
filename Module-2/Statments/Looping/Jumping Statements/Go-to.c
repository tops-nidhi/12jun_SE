// WAP to check no is prime or not
#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime:
    if (flag == 0)
    {
        printf("%d is prime number.", num);
    }
    else{
        printf("%d is not prime.", num);
    }
    
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
}