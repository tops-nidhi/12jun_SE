#include<stdio.h>
union stdata{
    int no;
    char name[10];
}obj;
int main() {
    printf("Enter your roll no: ");
    scanf("%d", &obj.no);
    printf("Enter your name: ");
    scanf("%s", &obj.name);
    printf("\n%s your roll no is: %d", obj.name, obj.no);
    return 0;
}