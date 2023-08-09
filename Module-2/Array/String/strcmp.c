// strcmp() is use to compare the two string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10], str2[20];
    int cmp;
    printf("Enter the 1st string: ");
    scanf("%s", &str1);
    printf("Enter the 2nd string: ");
    scanf("%s", &str2);
    cmp = strcmp(str1, str2);
    if(cmp > 0)
    {
    printf("Max string is: %s", str1);
    }
    else if(cmp == 0)
    {
        printf("\nBoth string are equal.");
    }
    else{
        printf("MAx String is :%s ", str2 );
    }
    return 0;
}