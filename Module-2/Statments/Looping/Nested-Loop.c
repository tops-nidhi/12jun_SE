#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 5; i++) // Outer loop(use for row)
    {
        for (j = 5; j > i; j--) // Inner loop(use for column)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) // Inner loop(use for column)
        {
            printf("%d", j);
            // printf("%d ", j);

        }
        printf("\n");
    }
    return 0;
}
/*
01234
0123
012
01
0
*/
/*
    1
   1 2
  1 2 3 
 1 2 3 4
1 2 3 4 5
*/

/*
    1
   12
  123
 1234
12345

*/