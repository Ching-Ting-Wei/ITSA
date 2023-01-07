#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    if (i > 31)
        printf("Value of more than 31\n");
    else
    {
        int result = 1;
        for (int j = 0; j < i; j++)
        {
            result *= 2;
        }
        printf("%d\n", result);
    }
    return 0;
}
