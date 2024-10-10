#include <stdio.h>

void secs(int *totSec);

int main()
{
    int totSec = 0;

    secs(&totSec);

    printf("Total Seconds : %d\n", totSec);

    return 0;
}

void secs(int *totSec)
{
    int hours, minutes, seconds;

    printf("Enter hours : ");
    scanf("%d", &hours);

    printf("Enter minutes : ");
    scanf("%d", &minutes);

    printf("Enter seconds : ");
    scanf("%d", &seconds);

    *totSec = (hours * 3600) + (minutes * 60) + seconds;
}