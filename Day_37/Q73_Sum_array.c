
/* Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

int main() {
    int m, n;
    int i, j;
    int sum [10];

    printf("Enter dimensions of matrix  (m n): ");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("Enter elements of matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        sum[i] = 0;
        for(int j = 0; j< n; j++){
            sum[i] += arr[i][j];
        }
        
    }
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i < s; i++ ){
        printf("%d ", sum[i]);
    }

 








    return 0;
}







