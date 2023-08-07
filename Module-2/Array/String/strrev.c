// strrev() is use reverse the string.
#include <string.h>
#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", &str);
    strrev(str);
    printf("\nYour reverse string is: %s", str);
    return 0;
}