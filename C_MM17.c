#include <stdio.h>

int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}
int main()
{
    int x, y, result;
    scanf("%d%d", &x, &y);
    result = gcd(x, y);
    printf("%d\n", result);

    return 0;
}