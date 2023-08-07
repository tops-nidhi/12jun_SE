// strlen() is user to get the length of the string
#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char str[20];
    printf("Enter a String : ");
    scanf("%s", &str);
    len = strlen(str);
    printf("Length of the your string is: %d", len);
    return 0;
}