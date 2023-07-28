#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // Outer loop(use for row)
    {
        for (j = 5; j > i; j--) // Inner loop(use for column)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // Inner loop(use for column)
        {
            // printf("%d", j);
            printf("%d ", j);

        }
        for (j = 5; j >= i; j--) // Inner loop(use for column)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++) // Inner loop(use for column)
        {
            // printf("%d", j);
            printf("%d ", j);

        }
        printf("\n");
    }
    return 0;
}