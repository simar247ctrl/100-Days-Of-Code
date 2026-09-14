/* Q 63 Merge two arrays.*/


#include <stdio.h>

void initialisearr(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void mergearray(int *arr1, int *arr2,int *merged,  int size1, int size2){
    for(int i =0; i < size1; i++ ){
        merged[i]  = arr1[i];
    }
    for(int i = 0; i< size2; i++){
        merged[size1 + i] = arr2[i];
    }
    
}

int main() {
    int n1, n2;

    printf("How many elements in array !: ");
    scanf("%d", &n1);
    int arr1[n1];
    initialisearr(arr1, n1);

    printf("How many elements in array 2: ");
    scanf("%d", &n2);
    int arr2[n2];

    initialisearr(arr2, n2);

    int merged [n1 + n2];

    mergearray(arr1,arr2, merged, n1, n2 );

    printf("Merged array: \n");

    for(int i = 0 ; i< (n1 + n2); i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
    
 

    return 0;
}