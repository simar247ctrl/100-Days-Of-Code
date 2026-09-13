/*  Q61 (Arrays (1D))
📋
Search for an element in an array using linear search.*/


#include <stdio.h>

int main() {
    int n;
    int arr[] = {22,4,13,8,99,154};
    int size = sizeof(arr) / sizeof(arr[0]);

        printf("Enter number to be searched: ");
        scanf("%d", &n);
    
    for(int i = 0; i < size; i++){
        if(arr[i] == n){
            printf("%d found at index %d\n", n, i);
            break;
        }
    }
    return 0;
}