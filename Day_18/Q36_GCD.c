
#include <stdio.h>

int main() {
    int a,b, temp = 0;

    printf("Enter 2 numbers: ");;
    scanf("%d %d", &a, &b);


    while(b != 0){
        temp = b;
        b = a %b;
        a = temp;

    }
    printf("Gcd: %d\n", a);

    return 0;
}