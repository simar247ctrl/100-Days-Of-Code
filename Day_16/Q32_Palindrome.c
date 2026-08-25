#include <stdio.h>

int main() {
    

    int n, reverse = 0;
    int orignal = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    orignal = n;

    while(n  != 0){
        digit  = n %10;
        reverse = reverse * 10 + digit;
        n /= 10;

    }
    if(reverse == orignal){
        printf("%d is a palindrome", orignal);
    }
    else{
        printf("%d is not a palindrome", orignal);
    }
    return 0;
}