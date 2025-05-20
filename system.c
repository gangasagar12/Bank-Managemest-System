// Bank management system
#include<stdio.h>
#include<stdlib.h>

#include<string.h>
struct account{  // structure to store accoount infomation

    char name[50];
    char account_number[20];
    char password[20];
    float balance;
};
struct account accounts[100];   // array of structure to store multiple accounts
int account_count = 0; // variable to keep track of number of accounts
void create_account(); // function to create a new account
void deposit_money(); // function to deposit money
void withdraw_money(); // function to withdraw money

void check_balance(); // function to check balance
void view_all_accounts(); // function to view all accounts
void transfer_money(); // function to transfer money


int main()
{
    int choice;   // variable to store user choice
    while(1){   // infinnite loop to keep the program running 
        system("cls"); // clear the screen
    printf("Welcome to the Bank Management System\n");
    printf("1. Create Account\n"); 
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Check Balance\n");
    printf("5. view all accouount : \n");
    printf("6. transfer money: \n");
    printf("7. Exit\n");
    printf("enter your choice:");
    scanf("%d", &choice); // take user input for choice

    }
    return 0;
}