
/* Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Show Sample Test Cases*/
#include <stdio.h>

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;      // Search left
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;       // Search right
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1)
        printf("-1 -1");
    else {
        printf("First Occurrence: %d (Index %d)\n", nums[first], first);
        printf("Last Occurrence: %d (Index %d)\n", nums[last], last);
    }

    return 0;
}