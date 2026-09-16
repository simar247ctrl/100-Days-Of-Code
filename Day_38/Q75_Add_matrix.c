
/* Q75 (2D Arrays)
📋
Add two matrices.*/


#include <stdio.h>

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

void addarray(int row, int col, int arr1[row][col], int arr2[row][col], int arr3[row][col]){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
  
}
int main() {
    

    int row1, col1, row2, col2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row1, &col1);

   
    int arr1[row1][col1];
    initialisearray(row1, col1, arr1);

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row2, &col2);


    int arr2[row2][col2];
    initialisearray( row2, col2, arr2);
    int arr3[row1][col1];
    addarray(row1, col1, arr1,arr2,arr3);

    printarr(row1, col1, arr3);

    

    

    return 0;

}