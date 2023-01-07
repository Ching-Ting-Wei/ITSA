#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x * x <= 10000 && y * y <= 10000)
        printf("inside\n");
    else
        printf("outside\n");

    return 0;
}