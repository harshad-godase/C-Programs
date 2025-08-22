#include<stdio.h>
void main(){
    /*1. *****
         ****
         ***
         **
         *
    
    */

       for (int r = 5; r>0; r--)
    {
        
        for (int c=0; c<r; c++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    /*2.*
        **
        * *
        *  *
        *****    
    */

      for (int r = 1; r<=5; r++)
    {
       for(int c=1;c<=r;c++){
         if(c==1||c==r||r==5){
                printf("*");
            }else{
                printf(" ");
            }
       }
        printf("\n");
        
    }

    /*3.   *
          ***
         *****
        *******
     */

    for (int r = 1; r <= 5; r++)
    {
        for (int s = r; s <= 5; s++)
        {
            printf(" ");
        }
        for (int c =1; c <= (2 * r - 1); c++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*4. 1
         2 2
         3 3 3
         4 4 4 4
         5 5 5 5 5
    */

    for (int r = 1; r<=5;r++)
    {
        for(int c=1;c<=r;c++){
            printf("%d",r);
        }
        printf("\n");
    }

    /*5. 1
         1 2 
         1 2 3
         1 2 3 4
         1 2 3 4 5
    */

    for (int r = 1; r<=5;r++)
    {
        for(int c=1;c<=r;c++){
            printf("%d",c);
        }
        printf("\n");
    }

    /*6.55555
        4444
        333
        22
        1
    */
   for (int r = 5; r>=1;r--)
    {
        for(int c=1;c<=r;c++){
            printf("%d",r);
        }
        printf("\n");
    }

/*7. 1
     21
     321
     4321
     54321

*/
    
     for (int r = 1; r<=5;r++)
    {
        for(int c=r;c>=1;c--){
            printf("%d",c);
        }
        printf("\n");
    }

    /*8. 1
         2 3
         4 5 6
         7 8 9 10
         11 12 13 14 15
    */

    int count=1;
    for (int r = 1; r<=5;r++)
    {
        for(int c=1;c<=r;c++){
            printf("%d ", count);
            count++;   
        }
        printf("\n");
    }

    /*9.*******
         *****
          ***
           *
     */
     for (int r = 5; r >= 1; r--)
    {
        for (int s = r; s <= 5; s++)
        {
            printf(" ");
        }
        for (int c =1; c <= (2 * r - 1); c++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*10.      *
              * *
             *   *
            *******
    */
    for (int r = 1; r <= 5; r++)
    {
        for (int s = r; s <= 5; s++)
        {
            printf(" ");
        }
        for (int c = 1; c <= (2 * r - 1); c++)
        {
            if (c==1||c == (2 * r - 1) || r == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
   

   
   
    




}