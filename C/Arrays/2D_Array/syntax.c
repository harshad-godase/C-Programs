#include<stdio.h>

void main(){
    int matrix[2][2]={3,1,8,6};

    printf("%d\t",matrix[0][0]);
    printf("%d\n",matrix[0][1]);
    printf("%d\t",matrix[1][0]);
    printf("%d\t",matrix[1][1]);

    int row_size,col_size;
    printf("\nEnter the row size & Col size:");
    scanf("%d %d",&row_size,&col_size);

    int matrix1[row_size][col_size];

    for (int r = 0; r< row_size; r++)
    {
        for (int c= 0; c < col_size; c++)
        {
            scanf("%d",&matrix1[r][c]);
            
        }
    }

      printf("\nThe Data in Matrix are:\n");
      for (int r = 0; r< row_size; r++)
    {
        for (int c= 0; c < col_size; c++)
        {
            printf("%d\t",matrix1[r][c]);
            
        }
        printf("\n");
        
    }
    
}