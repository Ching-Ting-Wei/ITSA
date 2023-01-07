#include <stdio.h>

int main()
{
    int s, days, hours, minutes, seconds;
    scanf("%d", &s);
    days = s / 86400;
    hours = (s % 86400) / 3600;
    minutes = (s % 3600) / 60;
    seconds = s % 60;

    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);

    return 0;
}