
/* Q 64 ind the digit that occurs the most times in an integer number.*/


#include <stdio.h>

int main() {
    int n, digit = 0;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);


    while(n != 0){
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    int max = 0, most = 0;

    for(int i = 0 ; i< 10; i++){
        if(count[i] > max){
            most = i;
            max = count[i];
        }
    }

    printf("Digit which occured the most amount of times: %d", most);
  

    return 0;
}