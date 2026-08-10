
#include <stdio.h>

int main() {
    int a , b, sum = 0;
   
    printf("Enter two number: ");
    scanf("%d %d", &a, &b); //input 2 numbers
    
    sum = a + b; // adds two number
    printf("Sum of %d and %d: %d", a,b,sum); // prints sum
    

    return 0;
}