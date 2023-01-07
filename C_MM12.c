#include <stdio.h>

int main()
{
    // dist表distance,t表秒數
    double dist, t;
    scanf("%lf", &dist);
    // 換成公分
    dist *= 100;
    t = dist / (100 - 30 * 2.54);
    // 無條件進位
    int t1 = (int)t + 1;
    printf("%d\n", t1);

    return 0;
}