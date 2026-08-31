
#include <stdio.h>

int main() {

    int n, digit = 0, factorial = 1, sum = 0, orignal = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    orignal = n;

    while(n != 0){
        digit = n % 10;
        factorial = 1;
        for(int i = 1; i <= digit; i++){
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }

    if(sum == orignal){
        printf("%d is a Strong number.", orignal);
    }
    else{
        printf("%d is not a Strong number", orignal);
    }


    return 0;
}