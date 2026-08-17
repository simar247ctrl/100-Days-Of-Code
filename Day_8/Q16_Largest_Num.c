#include <stdio.h>

int main(){
    int a,b,c, largest = 0;

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    if(a > b && a > c){
        largest = a;

    }else if(b > a && b > c){
        largest = b;
    }else{
        largest = c;
    }
    printf("Largest number: %d", largest);
    return 0;
}