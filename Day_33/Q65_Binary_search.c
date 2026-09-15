

/* Q65 (Arrays (1D))
📋
Search in a sorted array using binary search.*/
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
    int target;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter element to search: ");
    scanf("%d", &target);

    int result = binarysearch(arr,target, size);

    if(result == -1){
        printf("Element not found");
    }
    else{
        printf("Element found at index: %d ", result);
    }
    

    return 0;
}