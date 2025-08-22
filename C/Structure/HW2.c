#include<stdio.h>

/*
Create a structure to specify data of customers in a bank. The data to be stored is:
Account number, Name, Balance in account.Assume maximum of 200 customers in the bank.
(a) Write a function to print the Account number and name of each customer with balance below Rs. 100.
(b) If a customer request for withdrawalor deposit, it is given in the form: 
Acct. no, amount, code (1 fordeposit, 0 for withdrawal) 
Write a program to give a message, “Thebalance is insufficient for the specified withdrawal”.
*/

struct customers
{
    int account_number;
    char name[50];
    float balance;
};

void accept_details(struct customers c[], int n);
void cust_below_100(struct customers c[], int n);
void transaction(struct customers c[], int n);

void main(){
    int n;
    printf("Enter number of customers (max 200): ");
    scanf("%d", &n);

    struct customers customer[200];

    accept_details(customer, n);
    cust_below_100(customer, n);
    transaction(customer, n);



}

void accept_details(struct customers c[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Enter account number: ");
        scanf("%d", &c[i].account_number);
        printf("Enter name: ");
        scanf(" %s", c[i].name);
        printf("Enter balance: ");
        scanf("%f", &c[i].balance);
    }
}

void cust_below_100(struct customers c[], int n) {
    printf("\nCustomers with balance below Rs. 100:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", c[i].account_number, c[i].name);
        }
    }
}

void transaction(struct customers c[], int n) {

    int account_number, code;
    float amount;

    printf("\nEnter account number for transaction: ");
    scanf("%d", &account_number);
    printf("Enter amount: ");
    scanf("%f", &amount);

    printf("Enter code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (c[i].account_number == account_number) {

            found = 1;

            if (code == 1) {
                c[i].balance += amount;
                printf("Deposit successful. New balance: Rs. %.2f\n", c[i].balance);
            } 
            else if (code == 0) {
                if (c[i].balance >= amount) {
                    c[i].balance -= amount;
                    printf("Withdrawal successful. New balance: Rs. %.2f\n", c[i].balance);
                }else{
                    printf("The balance is insufficient for the specified withdrawal.\n");
                }
            } 
            else {
                printf("Invalid code entered.\n");
            }
            break;
        }
    }
    if (found==0) {
        printf("Account number not found.\n");
    }
}

    