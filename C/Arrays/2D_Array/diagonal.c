#include<stdio.h>

void main(){

    int row_size, col_size;
    printf("Enter rows and cols of Matrices:");
    scanf("%d %d", &row_size, &col_size);

    int matrix1[row_size][col_size], matrix[row_size][col_size];

    printf("\nEnter %d elements of Matrix:\n",row_size*col_size);
    for (int i = 0; i < row_size; i++)
        for (int j = 0; j < col_size; j++)
            scanf("%d", &matrix[i][j]);

    printf("\nThe Data in Matrix are:\n");
    for (int r = 0; r < row_size; r++) {
        for (int c = 0; c < col_size; c++) {
            printf("%d\t", matrix[r][c]);
        }
        printf("\n");
    }

    // Sum of main diagonal
    
    int sum = 0;
    for (int i = 0; i < row_size; i++) {
        sum += matrix[i][i];
    }
    printf("\nSum of main diagonal elements: %d\n", sum);


    // transpose of the matrix

    int transpose[row_size][col_size];
    for (int r = 0; r < row_size; r++) {
        for (int c = 0; c < col_size; c++) {
            transpose[c][r] = matrix[r][c];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int r = 0; r < col_size; r++) {
        for (int c = 0; c < row_size; c++) {
            printf("%d\t", transpose[r][c]);
        }
        printf("\n");
    }

}