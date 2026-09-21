
/* Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct.*/


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

bool diagonal_distinct(int row, int col, int arr[row][col]){
    if(row != col){
        return false;
    }
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < row; j++){
            if(arr[i][i] == arr[j][j]){
                return false;
            }
        }
    }
    return true;
}

int main() {
    

    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

   
    int arr[row][col];
    initialisearray(row, col, arr);
    if(diagonal_distinct(row, col, arr)){
        printf("True");
    }
    else{
        printf("False");
    }
    


    

    

    return 0;

}