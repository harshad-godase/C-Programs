#include<stdio.h>
#include<string.h>

/*
Write a menu driven program that depicts the working of a library.
The menu options should be: 390 Let Us C
1. Add book information 2. Display book information 
3. List all books of given author 4. List the title of specified book 
5. List the count of books in the library 
6. List the books in the order of accession number
7. Exit Create a structure called library to hold accession number, 
   title of the book, author name, price of the book, 
   and flag indicating whether book is issued or not.
*/

struct library {
    int accession_number;
    char title[50];
    char author[50];
    float price;
    int issued; // 0 for not issued, 1 for issued
};

void add_book_info(struct library books[], int n);
void display_book_info(struct library books[], int n);
void list_books_by_author(struct library books[], int n, char author[]);
void list_title_of_book(struct library books[], int n, int accession_number);
void list_count_of_books(struct library books[], int n);
void list_books_by_accession(struct library books[], int n);
void menu();

void main(){

    int n, choice;
    printf("Enter the maximum number of books in the library: ");
    scanf("%d", &n);
    
    struct library books[n];
    
    do {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_book_info(books, n);
                break;
            case 2:
                display_book_info(books, n);
                break;
            case 3: {
                char author[50];
                printf("Enter author name to list books: ");
                scanf(" %s", author);
                list_books_by_author(books, n, author);
                break;
            }
            case 4: {
                int accession_number;
                printf("Enter accession number of the book: ");
                scanf("%d", &accession_number);
                list_title_of_book(books, n, accession_number);
                break;
            }
            case 5:
                list_count_of_books(books, n);
                break;
            case 6:
                list_books_by_accession(books, n);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);


}

void add_book_info(struct library books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Enter accession number: ");
        scanf("%d", &books[i].accession_number);
        printf("Enter title of the book: ");
        scanf(" %s", books[i].title); // to read string with spaces
        printf("Enter author name: ");
        scanf(" %s", books[i].author);
        printf("Enter price of the book: ");
        scanf("%f", &books[i].price);
        printf("Is the book issued? (1 for Yes, 0 for No): ");
        scanf("%d", &books[i].issued);
    }
}

void display_book_info(struct library books[], int n) {
    printf("\nBook Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Accession Number: %d, Title: %s, Author: %s, Price: %.2f, Issued: %s\n",
               books[i].accession_number, books[i].title, books[i].author,
               books[i].price, books[i].issued ? "Yes" : "No");
    }
}

void list_books_by_author(struct library books[], int n, char author[]) {
    printf("\nBooks by Author %s:\n", author);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Accession Number: %d, Title: %s\n", books[i].accession_number, books[i].title);
        }
    }
}

void list_title_of_book(struct library books[], int n, int accession_number) {
    for (int i = 0; i < n; i++) {
        if (books[i].accession_number == accession_number) {
            printf("\nTitle of the book with Accession Number %d: %s\n", accession_number, books[i].title);
            return;
        }
    }
    printf("\nBook with Accession Number %d not found.\n", accession_number);
}

void list_count_of_books(struct library books[], int n) {
    printf("\nTotal number of books in the library: %d\n", n);
}

void list_books_by_accession(struct library books[], int n) {
    printf("\nBooks in the order of Accession Number:\n");
    for (int i = 0; i < n; i++) {
        printf("Accession Number: %d, Title: %s\n", books[i].accession_number, books[i].title);
    }
}

void menu() {
    printf("\nLibrary Menu:\n");
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. List the books in the order of accession number\n");
    printf("7. Exit\n");
}

