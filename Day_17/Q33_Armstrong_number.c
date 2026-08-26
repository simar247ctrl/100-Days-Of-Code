
#include <stdio.h>

int main() {
    int n, digit = 0, orignal = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    orignal = n;

    while(n != 0){
        digit = n % 10;
        sum += (digit * digit * digit);
        n /= 10;
    }
    if(sum == orignal ){
        printf("%d is an Armstrong number.", orignal);
    }
    else{
        printf("%d is not an armstrong number.", orignal);
    }


    return 0;
}