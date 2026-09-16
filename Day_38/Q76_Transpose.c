
/* Q76 (2D Arrays)
Check if a matrix is symmetric.*/


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

void transpose(int row, int col, int arr[row][col], int transpose_matrix[col][row]){
    for(int i= 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transpose_matrix[j][i] = arr[i][j];
        }
    }
}
bool is_symmetric(int row, int col, int arr[row][col],int transpose_matrix[col][row]){
    if(row != col){
        return false;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col;j++){
            if(transpose_matrix[i][j] != arr[i][j]){
                return false;
            }
        }
    }
    return true;
}
int main() {
    

    int row1, col1, row2, col2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row1, &col1);

   
    int arr1[row1][col1];
    initialisearray(row1, col1, arr1);
    int transpose_matrix[col1][row1];
    transpose(row1, col1, arr1, transpose_matrix);





    printarr(col1, row1, transpose_matrix);

    if(is_symmetric(row1, col1, arr1, transpose_matrix)){
        printf("True");
    }
    else{
        printf("False");
    }

    

    

    return 0;

}