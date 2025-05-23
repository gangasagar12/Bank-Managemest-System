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

    
        switch(choice){
            case 1:
            create_account();
        break;
        case 2:
        deposit_money();
        break;
        case 3:
        withdraw_money();  // functiom  money withdraw
        break;
        case 4:
        check_balance();  // function to check balance
        break;
        case 5:
        view_all_accounts();
        break;
        case 6:
        transfer_money();
        break;
        case 7:
        exit(0);
        break;
        default:    // default case
        printf("Invalid choice  ! plese enter the valid choiece: \n");
        }
    } 
    return 0;
}
        
void create_account(){
    if(account_count>=100){               // check if maximum member is reached
        printf(" maximum number of account is reached: \n");
        return;
    }
    printf("enter the account holder  name: \n");                         // for the account holder namw
    scanf("%s",&accounts[account_count].name); 

    printf(" enter the account holder name : \n");  // for the account  member
    gets(accounts[account_count].account_number);

    printf("enter the password: \n");
    gets(accounts[account_count].password);

    printf("enter the initial balance: \n");
    scanf("%f",&accounts[account_count].balance);
    account_count++;                           // increament the account count
    printf("account created successfully\n");
}
void deposit_money(){
    if (account_count==0){
        printf("no account is created\n");
        return;
    }
    int account_number;
    float amount;
    printf("enter the account number: \n");
    scanf("%d",&account_number);
    for (int i = 0; i < account_count; i++)
    {
    if(account_number==accounts[i].account_number){
        printf("enter the amount to deposit: \n");
        scanf("%2f",&amount);
        accounts[i].balance+=amount;
        printf("amount deposit sucessfully: \n");
        return;
    }
    printf("account not found\n");

    
}

}