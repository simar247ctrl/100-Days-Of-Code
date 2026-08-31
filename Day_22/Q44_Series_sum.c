
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i == 1){
            sum += 1;
        }
        else{
            sum +=  (float)(2*i -1)/(2 * i);
        }
    }
    printf("Sum: %.2f", sum);
 

    return 0;
}