
#include <stdio.h>

int main() {
    int n, sum = 0;
    

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i <n; i++){
        printf("Emnter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <n; i++){
        sum += arr[i];
    }
    
  
    printf("Sum: %d", sum);

    return 0;
}