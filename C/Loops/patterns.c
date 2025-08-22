#include<stdio.h>

void main(){

     /*1 *****
         *****
         *****
         *****
         ***** */
    for (int r = 0; r < 5; r++)
    {
        for(int c=0;c<5;c++){
            printf("*");
        }
        printf("\n");
       
    }

    /*2.  *
          **
          ***
          ****
          *****
    */
    for (int r = 1; r <= 5; r++)
    {
        
     for (int c=1; c<=r; c++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    /*3.----*
        ---**
        --***
        -****
        *****
    (-) spaces
    */
    for (int r = 1; r <= 5; r++)
    {
         for (int s = r; s <= 5 - 1; s++)
        {
            printf(" ");
        }
        for (int c=1; c<=r; c++)
        {
            printf("*");
        }
        printf("\n");
     }


      /*4.     *****
              *****
             *****
            *****
           *****
      */
    for (int r = 0; r < 5; r++)
    {
        for (int s = r; s < 5 - 1; s++)
        {
            printf(" ");
        }
        
        for(int c=0;c<5;c++){
            printf("*");
        }
        printf("\n");
       
    }


    /*5. *****
         *   *
         *   *
         *   *
         *****
     */
    for (int r = 1; r <= 5; r++)
    {
        for(int c=1;c<=5;c++){
            if(r==1 || r==5 || c==1 || c==5){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}