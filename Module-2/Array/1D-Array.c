#include <stdio.h>
int main()
{
    int i, count;
    printf("Enter the size of the array: ");
    scanf("%d", &count);
    int array[count];
    for (i = 0; i < count; i++)
    {
        printf("Enter the value of array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < count; i++)
    {
        printf("\nValue of the array[%d]: %d", i, array[i]);
    }
}