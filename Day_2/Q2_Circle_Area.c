
#include <stdio.h>
#define PI 3.14

int main() {
    float radius;
    

    printf("Enter radius of the circlee: "); 
    scanf("%f", &radius); //user input 

    printf("Area of the circle; %.2f \n",  PI * (radius * radius)); //calculates area
    printf("Perimeter: %.2f\n", 2*(PI * radius)); //calculates perimeter
  

    return 0;
}