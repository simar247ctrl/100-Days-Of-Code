
/* Q72 (2D Arrays)
📋
Find the sum of all elements in a matrix.*/
#include <stdio.h>

int main() {
    int m, n;
    int i, j;
    int sum = 0;

    printf("Enter dimensions of matrix  (m n): ");
    scanf("%d %d", &m, &n);



    int A[m][n];

    printf("Enter elements of matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

 



    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum+= A[i][j];
        }
      
    }
    printf("Sum: %d", sum);





    return 0;
}







