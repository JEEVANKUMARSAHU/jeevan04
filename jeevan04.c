#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("01");
        }
        printf("01\n");
    }
    return 0;
}
