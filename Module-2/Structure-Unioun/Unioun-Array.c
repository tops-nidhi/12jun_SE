#include<stdio.h>
union stdata{
    int no;
    char name[10];
}/*obj*/;
int main() {
    union stdata obj[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter your name: ");
        scanf("%s", &obj[i].name);
        printf("Enter your roll no: ");
        scanf("%d", &obj[i].no);
    }
    for (i = 0; i < 3; i++)
    {        
        printf("\n%s your roll no is: %d", obj[i].name, obj[i].no);
    }
    
    return 0;
}