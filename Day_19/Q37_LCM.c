
#include <stdio.h>

int main() {
    int max, x,y, lcm = 0;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    max = (x>y)? x:y;

    for(int i = max;; i++){
        if(i %x == 0 &&i %y == 0){
            lcm = i;
            break;
        }
    }
    printf("LCM: %d", lcm);




    return 0;
}