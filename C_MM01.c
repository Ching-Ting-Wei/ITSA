#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double area = ((a + b) * c) / 2.0; // calculate Trapezoid area
    printf("Trapezoid area:%.1f\n", area);

}