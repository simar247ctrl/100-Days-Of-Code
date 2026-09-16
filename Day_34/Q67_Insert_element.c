
/* Q67 (Arrays (1D))
📋
Insert an element in an array at a given position.*/
#include <stdio.h>

int main() {
    int element, n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];

    for(int i = 0; i < n ; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Position where to insert: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for(int i = n; i >pos; i--){
        arr[i] = arr[i -1];
    }
    arr[pos] =element;

    printf("New array: ");
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
  

    return 0;
}