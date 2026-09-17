/* Q69 (Arrays (1D))
📋
Find the second largest element in an array.*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int second = INT_MIN;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    }
    else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}





