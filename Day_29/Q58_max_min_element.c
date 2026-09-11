
#include <stdio.h>

int main() {
    int n, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(int i = 1; i <n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Max: %d, Min: %d", max, min);


    return 0;
}