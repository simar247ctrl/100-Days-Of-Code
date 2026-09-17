
/* Q70 (Arrays (1D))
📋
Rotate an array to the right by k positions.*/
#include <stdio.h>

int main() {
    int k,n,last = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("How many elements to shift the array to the right by: ");
    scanf("%d", &k);

    for(int i = 0 ;i< k;i++){
        last = arr[n-1];

        for(int j = n; j> 0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
    for(int i = 0; i <n; i++){
        printf("%d", arr[i]);
    }

    


    return 0;
}