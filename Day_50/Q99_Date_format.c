/*Q99 (Strings) Change the date format from dd/04/yyyy to dd-Apr-yyyy. */

#include <stdio.h>

int main() {
    int day, month, year;
    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-%s-%04d\n", day, months[month], year);

    return 0;
}

