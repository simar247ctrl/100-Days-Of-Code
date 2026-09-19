/* Q74 (2D Arrays)
Find the transpose of a matrix.*/


/*Q71 (2D Arrays)
Read and print a matrix.*/
#include <stdio.h>

int main() {
    int m, n;
    int i, j;
    int sum [10];

    printf("Enter dimensions of matrix  (m n): ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    int arr2[n][m];

    printf("Enter elements of matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i =0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr2[j][i] = arr[i][j];
        }
       
    }
    printf("Orignal array: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0;j <n; j++ ){
            printf("%d", arr[i][j]);
        }
         printf("\n");
    }
    printf("Transposed matrix: \n");
    

    for(int i =0; i < n; i++){
        for(int j = 0; j <m; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
  

 








    return 0;
}







