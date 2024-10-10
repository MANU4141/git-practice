#include <stdio.h>

int secs(int hours, int minutes, int seconds) 
{
    int total_seconds = (hours * 3600) + (minutes * 60) + seconds;
    return total_seconds;
}

int main() 
{
    int hours, minutes, seconds, total_seconds;

    printf("Enter hours : ");
    scanf("%d", &hours);
    
    printf("Enter minutes : ");
    scanf("%d", &minutes);
    
    printf("Enter seconds : ");
    scanf("%d", &seconds);

    total_seconds = secs(hours, minutes, seconds);

    printf("Total number of seconds : %d\n", total_seconds);

    return 0;
}