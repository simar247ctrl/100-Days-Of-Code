
/*Q71 (2D Arrays)
Read and print a matrix.*/
#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("Enter dimensions of matrix  (m n): ");
    scanf("%d %d", &m, &n);



    int A[m][n];

    printf("Enter elements of matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

 



    printf("Matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }





    return 0;
}







