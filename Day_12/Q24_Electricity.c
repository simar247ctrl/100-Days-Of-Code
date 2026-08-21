
#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if(units <= 100){
        bill = units * 5;
        printf("Electricity bill: Rs%d", bill);
    }
    else if(units <= 200){
        bill = 100* 5 + (units - 100) * 7;
        printf("Electricity bill: Rs%d", bill);
    }

    else if(units <= 300){
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        printf("Electricity Bill Rs%d", bill);
    }
    else{
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
        printf("Electricity bill Rs%d", bill);
    }


    return 0;
}   