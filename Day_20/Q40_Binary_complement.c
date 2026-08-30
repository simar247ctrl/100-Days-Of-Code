
#include <stdio.h>

int main() {
    int n, digit=0, result = 0, place  = 1, temp = 0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    temp = n;

    while(temp >= 10){
        temp /= 10;
        place *= 10;
    }
    printf("1'S complement: ");

    while(place != 0){
        digit  = n /place;
        if(digit == 1){
            printf("0");
        }
        else if(digit == 0){
            printf("1");
           
        }
        n = n % place;
        place /= 10;
       
        
    }


    return 0;
}