#include<stdio.h>
void main(){
    int age;
    char married_status,gender;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marital status (y for married / n for unmarried): ");
    scanf(" %c", &married_status);

    if (married_status == 'y' || married_status == 'Y') {
        printf("Driver is insured.\n");
    } else {
        if ((gender == 'M' || gender == 'm') && age > 30) {
            printf("Driver is insured.\n");
        } else if ((gender == 'F' || gender == 'f') && age > 25) {
            printf("Driver is insured.\n");
        } else {
            printf("Driver is not insured.\n");
        }
    }
}


    