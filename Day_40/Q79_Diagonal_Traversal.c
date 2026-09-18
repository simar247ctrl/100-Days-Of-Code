
/* Q79 (2D Arrays)
Perform Diagonal traversal of a matrix.*/
#include <stdio.h>

void initialisearray(int row, int col, int arr[row][col]) {
    printf("Enter matrix elements:\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printarr(int row, int col, int arr[row][col]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void diagonal_traversal(int row, int col, int arr[row][col]) {

    for(int d = 0; d < row + col - 1; d++) {

        for(int i = 0; i < row; i++) {

            int j = d - i;

            if(j >= 0 && j < col) {
                printf("%d ", arr[i][j]);
            }
        }

        printf("\n");
    }
}

int main() {

    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    initialisearray(row, col, arr);

    printf("\nMatrix:\n");
    printarr(row, col, arr);

    printf("\nDiagonal traversal:\n");
    diagonal_traversal(row, col, arr);

    return 0;
}