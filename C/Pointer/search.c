#include <stdio.h>

void main() {

    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    printf("\nEnter the Array Elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr + i);   
    }

    printf("\nArray Elements are:\n");
     for (int i = 0; i < size; i++) {
        printf("%d\t", *(ptr + i));   
    }

    int s,found=0;

    printf("\nEnter the search Element:");
    scanf("%d",&s);

    for (int i = 0; i < size; i++)
    {
        if (s==*(ptr + i))
        {
            printf("\nElement found in array");
            found=1;
            break;
        }
    }
    if (found == 0)
    {
       printf("\nElement not found in array");
    }
    

}