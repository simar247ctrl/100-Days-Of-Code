
#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Enter 2 variables: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    a = sum -a;
    b = sum - b;

    printf("Swapped value a: %d and b: %d\n", a,b);
  
    

    return 0;
}