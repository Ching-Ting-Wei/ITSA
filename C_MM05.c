#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    scanf("%lf", &a);
    a = (int)(a * a * 10 + 0.5);
    a = a / 10;
    printf("%.1lf\n", a);
    return 0;
}
