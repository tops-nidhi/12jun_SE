// WAP to get the user name.
#include<stdio.h>
int main()
{
    // char nm[5] = {'a','b','c', 'd', '\0'};
    // char nm[5] =  {"abcde"};
    char nm[20]; //declare string
    printf("Enter your name: "); //to get the string from the user
    scanf("%s", &nm);
    printf("Your name is: %s", nm);
    return 0;
}