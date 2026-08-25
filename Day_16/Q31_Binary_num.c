
#include <stdio.h>

int main() {
    int n , digit = 0, place = 1, binary = 0, orignal = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    orignal = n;

    while(n != 0){
        digit = n %2;
        binary = binary  + place * digit;
        place = place * 10;
        n /=2;
            
            
            }
    printf("Binary of %d: %d",orignal, binary );
 

    return 0;
}