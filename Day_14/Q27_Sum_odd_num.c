
#include <stdio.h>


int main() {

    int n, sum = 0, odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <=n; i++){
        odd = 2 * i -1;
        sum += odd;
     
    }
    printf("Sum: %d", sum);


    return 0;
}