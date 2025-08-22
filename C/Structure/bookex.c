#include<stdio.h>

struct Book
{
    char bookName[50];
    char author[50];
    int price;
}book;

void main() {

    printf("\nEnter the book name: ");
    scanf("%s", book.bookName);

    printf("\nEnter the author name: ");
    scanf("%s", book.author);

    printf("\nEnter the price of the book: ");
    scanf("%d", &book.price);

    printf("\nBook details are:");
    printf("\nBook name: %s", book.bookName);
    printf("\nAuthor name: %s", book.author);
    printf("\nPrice: %d", book.price);
}

