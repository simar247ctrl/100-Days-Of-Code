/* Q62 (Arrays (1D))
📋
Reverse an array without taking extra space.*/
#include <stdio.h>

int main() {
    int n;
    int arr[] = {22,4,13,8,99,154};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = size - 1; i >=0; i--){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    

    return 0;
}