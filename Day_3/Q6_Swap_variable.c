#include <stdio.h>

int main(){
    int temp = 0, a = 5,b = 7;

    temp = a;
    a = b;
     b = temp;

     printf("Value of a: %d\n", a);
     printf("Value of b: %d\n", b );

     return 0;



}