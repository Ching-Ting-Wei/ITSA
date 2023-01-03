#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    double area = (a * b) / 2.0; // calculate Trapezoid area
    printf("%.1f\n", area);
}