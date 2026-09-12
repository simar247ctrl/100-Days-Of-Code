
#include <stdio.h>

int main() {
    int even = 0, odd = 0;

    int arr[] = {4,5,13,17,18};
    int size = sizeof(arr)/ sizeof(arr[0]);

    for(int i = 0; i <size; i++){
        if(arr[i] %2 == 0){
            even++;
        }
        else if(arr[i] %2 != 0){
            odd++;
        }
    }
    printf("Number of even numbers: %d \n", even);
    printf("Number of odd number:%d ", odd);

    return 0;

}