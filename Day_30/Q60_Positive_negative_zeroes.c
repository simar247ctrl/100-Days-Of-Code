
#include <stdio.h>

int main() {
    int positive = 0, negative = 0, zeroes = 0;

    int arr[] = {0,4,5,0,13,17,-44,18, -4,-2};
    int size = sizeof(arr)/ sizeof(arr[0]);

    for(int i = 0; i <size; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else if(arr[i] == 0){
            zeroes++;
        }
    }
    printf("Number of positive numbers: %d \n", positive);
    printf("Number of negative number: %d \n", negative);
    printf("Number of zeroes: %d \n", zeroes);

    return 0;
}