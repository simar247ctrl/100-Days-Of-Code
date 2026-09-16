/* Q68 (Arrays (1D))
📋
Delete an element from an array.*/


#include <stdio.h>

int main() {
    int element, n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n ; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Position where to delete: ");
    scanf("%d", &pos);



    for(int i = pos; i < n -1; i++){
        arr[i] = arr[i +1];
    }
    n--;

    printf("New array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
  

    return 0;
}