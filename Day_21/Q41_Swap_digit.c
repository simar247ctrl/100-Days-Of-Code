
#include <stdio.h>

int main() {
    int n, last_digit = 0, first_digit = 0, digit = 1, orignal =0, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    orignal = n;
    last_digit = orignal % 10;
    

    while(orignal >= 10){
        orignal /= 10; 
        digit *= 10;
       
        
    }
    n = n  % digit;
    n /= 10;

    first_digit = orignal;
    result = last_digit * digit + n * 10 + first_digit;


    printf("%d", result);


    return 0;
}