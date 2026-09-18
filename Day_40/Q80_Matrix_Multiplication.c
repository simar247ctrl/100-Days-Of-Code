
/* Q80 (2D Arrays)

Multiply two matrices..*/


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

void mult_array(int row1, int col1,int row2, int col2, int arr1[row1][col1], int arr2[row2][col2], int arr3[row1][col2]){
    if(col1 != row2){
        printf("Multiplication not possible!");
        return ;
    }

    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            arr3[i][j] = 0;
            for(int k =0; k <col1 ; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            
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
    int arr3[row1][col2];
    mult_array(row1, col1,row2, col2, arr1,arr2,arr3);

    printarr(row1, col2, arr3);

    

    

    return 0;

}