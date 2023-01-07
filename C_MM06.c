#include <stdio.h>
#include <math.h>

int main()
{
    int mile;
    scanf("%d", &mile);
    double km = mile * 1.6;
    printf("%.1lf\n", km);
    return 0;
}
