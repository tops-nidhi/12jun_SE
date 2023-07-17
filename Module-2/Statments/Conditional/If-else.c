// WAP to check eligible for vote or not
#include<stdio.h>
int main() {
    int age;
    printf("Enter the users age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Congratulation, You're eligible for vote.");
    }
    else{
        printf("Sorry, you are too young!");
    }
    
    return 0;
}