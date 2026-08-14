
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 0; i <=n; i++){
        sum += i;

    }
    printf("Sum of first %d numbers: %d \n", n, sum);

  
    

    return 0;
}