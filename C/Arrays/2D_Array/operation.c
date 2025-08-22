#include<stdio.h>

void add_matrices(int r, int c, int A[r][c], int B[r][c]);
void sub_matrices(int r, int c, int A[r][c], int B[r][c]);
void mul_matrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2]);
void print_matrix(int r, int c, int M[r][c]);

void main() {
    int row_size, col_size;
    printf("Enter rows and cols of Matrices (same size for add/sub): ");
    scanf("%d %d", &row_size, &col_size);

    int matrix1[row_size][col_size], matrix2[row_size][col_size];

    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < row_size; i++)
        for (int j = 0; j < col_size; j++)
            scanf("%d", &matrix1[i][j]);

    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < row_size; i++)
        for (int j = 0; j < col_size; j++)
            scanf("%d", &matrix2[i][j]);

   
    add_matrices(row_size, col_size, matrix1, matrix2);
    sub_matrices(row_size, col_size, matrix1, matrix2);
    mul_matrices(row_size, col_size, matrix1, row_size, col_size, matrix2);

}



// Function to print a matrix

void print_matrix(int r, int c, int M[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
}

// Addition Function

void add_matrices(int r, int c, int A[r][c], int B[r][c]) {
    int Sum[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            Sum[i][j] = A[i][j] + B[i][j];

    printf("\nAddition Result:\n");
    print_matrix(r, c, Sum);
}

// Subtraction Function

void sub_matrices(int r, int c, int A[r][c], int B[r][c]) {
    int Diff[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            Diff[i][j] = A[i][j] - B[i][j];

    printf("\nSubtraction Result:\n");
    print_matrix(r, c, Diff);
}

// Multiplication Function

void mul_matrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2]) {
    if (c1 != r2) {
        printf("\nMultiplication not possible! (c1 != r2)\n");
        return;
    }

    int Mul[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            Mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
                Mul[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("\nMultiplication Result:\n");
    print_matrix(r1, c2, Mul);
}


