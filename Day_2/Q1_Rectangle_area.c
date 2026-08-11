
#include <stdio.h>

int main() {
    int len, breadth,  perimeter = 0, area = 0;

    printf("Enter 2 sides of the rectangle: "); 
    scanf("%d %d", &len, &breadth); //user input 

    printf("Area of the rectangle; %d \n",  (len * breadth)); //calculates area
    printf("Perimeter: %d \n", 2*(len + breadth)); //calculates perimeter
  

    return 0;
}