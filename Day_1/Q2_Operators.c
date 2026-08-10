
#include <stdio.h>

int main() {
    int a,b, sum =0, quo  = 0, mult = 0, difference = 0 ;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    difference = a-b;
    mult = a *b;
    if(b != 0){
        quo = a/b;
    }
 
    
    
    printf("Sum of %d and %d: %d\n", a,b, sum);
    printf("Difference of %d and %d: %d\n", a,b, difference);
    printf("Product of %d and %d: %d\n", a,b, mult);
    if (b != 0) {
        printf("Quotient of %d and %d: %d\n", a, b, quo);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}