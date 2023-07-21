#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        if(i == 5)
        {
            continue; // skips the rest of this iteration and goes to next one without executing any statements 
        }
        printf("%d\n", i);
    }
    return 0;
}