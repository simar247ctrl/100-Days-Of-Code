
#include <stdio.h>

int main() {

    int totalseconds, hours = 0, minutes = 0, seconds = 0;

    printf("Enter time in seconds: ");
    scanf("%d", &totalseconds);

    hours = totalseconds/ 3600;
    totalseconds %= 3600;
    minutes  = totalseconds / 60;
    seconds  = totalseconds % 60;

    printf("Time= %02d: %02d: %02d ", hours, minutes, seconds);



    return 0;
}