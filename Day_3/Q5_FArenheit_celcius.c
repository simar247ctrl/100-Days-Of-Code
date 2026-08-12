#include <stdio.h>

int main(){
    float f = 0.0  , c ;

    printf("Enter celcius temp: ");
    scanf("%f", &c); //user input
    f = (c * 9.0/5.0) + 32;
    printf("Celcius %.2f in farenheit: %.2f\n", c, f); // output 

    return 0;


}