#include<stdio.h>
#include<stdio.h>


void main() {
    int row_size, col_size;
    printf("Enter rows and cols of Matrices:");
    scanf("%d %d", &row_size, &col_size);

    int matrix1[row_size][col_size], matrix2[row_size][col_size];

    printf("\nEnter %d elements of Matrix 1:",row_size*col_size);
    for (int i = 0; i < row_size; i++)
        for (int j = 0; j < col_size; j++)
            scanf("%d", &matrix1[i][j]);

    printf("\nEnter %d elements of Matrix 2:",row_size*col_size);
    for (int i = 0; i < row_size; i++)
        for (int j = 0; j < col_size; j++)
            scanf("%d", &matrix2[i][j]);


    //Matrix Equal Check
    
    int flag=0;

    for (int r = 0; r < row_size; r++)
    {
        for (int  c = 0; c < col_size; c++)
        {
            if (matrix1[r][c]!=matrix2[r][c])
            {
               flag=1;
               break;
            }
            
        }
        
    }

    if (flag==1)
    {
       printf("Matrix1 and Matrix2 are not equal\n");
    }else{
        printf("Matrix1 and Matrix2 are equal\n");
    }

   





    

}




