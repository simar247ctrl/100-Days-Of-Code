
/* 78 (2D Arrays)
Find the sum of main diagonal elements for a square matrix.*/


#include <stdio.h>
#include <stdbool.h>

void initialisearray(int row, int col, int arr[row][col]){
    printf("Initialise array: ");
    for(int i = 0; i <row; i++){
        for(int j = 0; j < col;j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void printarr(int row, int col, int arr[row][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int sum_diagonal(int row, int col, int arr[row][col]){
    int sum = 0;
    if(row != col){
        return -1;
    }
    for(int i = 0; i < row; i++){
        sum += arr[i][i];
        
    }
    return sum;
}

int main() {
    

    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

   
    int arr[row][col];
    initialisearray(row, col, arr);
    printf("Diagonal sum: %d", sum_diagonal(row, col, arr));



    

    

    return 0;

}