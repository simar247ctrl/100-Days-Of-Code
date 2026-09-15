

/* Q66 (Arrays (1D))
📋
Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int binarysearch(int arr[], int target, int size){
    int low = 0;
    int high = size -1;
    while(low <= high){
        int mid = low + (high -low) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else if(arr[mid] > target){
            high = mid -1;
        }
    }
    return -1;
    
}

int main() {
    int element;
    int arr[] = {1,2,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    size +=1;

    printf("Enter element to insert: ");
    scanf("%d", &element);

   int pos = 0; 
    while(pos < size && arr[pos] < element){
        pos++;
    }
    for(int i = size; i > pos; i--){
        arr[i] = arr[i -1];
    }
    arr[pos] = element;

    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    

    return 0;
}