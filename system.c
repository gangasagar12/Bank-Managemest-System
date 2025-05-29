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

    char gmail[50]; // variable to store gmail ID
    int password; // variable to store password
      int choice;  // variable to store user choice

   while(1){   // infinnite loop to keep the program running 
    printf("(enter the password) or (enter  the gmail ID) to acess the bank management system : \n");
    scanf("%d",&password); // take password input from user 
    scanf("%s", gmail); // take gmail input from user
    if (password==9746332963  || strcmp(gmail,"user@gmail.com")==0){
    
      
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
    scanf("%d", &choice); 
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
    return 0;
}
else{
    printf("invilad password or gmail ID !\n");
}
}

void create_account(){
    if(account_count>=100){               // check if maximum member is reached
        printf(" maximum number of account is reached: \n");
        return;
    }
    printf("enter the account holder  name: \n"); // for the account holder namw
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
    char account_number[20]; // variable to store account number
    float amount; // variable to store amount to be deposited
    printf("enter the account number: \n");
    scanf("%s", account_number);
    
    for(int i=0; i<account_count; i++){
        if(strcmp(accounts[i].account_number, account_number) == 0){ // check if account number matches
            printf("enter the amount to be deposited: \n");
            scanf("%f", &amount);
            accounts[i].balance += amount; // add amount to balance
            printf("amount deposited successfully\n");
            return;
        }
    }
    printf("account not found\n");
}
void withdraw_money(){
    char account_number[20]; // variable to store account number
    float amount; // variable to store amount to be withdrawn
    printf("enter the account number: \n");
    scanf("%s", account_number);
    
    for(int i=0; i<account_count; i++){
        if(strcmp(accounts[i].account_number, account_number) == 0){ // check if account number matches
            printf("enter the amount to be withdrawn: \n");
            scanf("%f", &amount);
            if(amount > accounts[i].balance){ // check if sufficient balance is available
                printf("insufficient balance\n");
                return;
            }
            accounts[i].balance -= amount; // deduct amount from balance
            printf("amount withdrawn successfully\n");
            return;
        }
    }
    printf("account not found\n");
}
void check_balance(){
    char account_number[20]; // variable to store account number
    printf("enter the account number: \n");
    scanf("%s", account_number);
    
    for(int i=0; i<account_count; i++){
        if(strcmp(accounts[i].account_number, account_number) == 0){ // check if account number matches
            printf("Account holder name: %s\n", accounts[i].name); // print account holder name
            printf("Account number: %s\n", accounts[i].account_number); // print account number

            
            printf("balance: %.2f\n", accounts[i].balance); // print balance
            return;
        }
    }
    printf("account not found\n");
}
void view_all_accounts(){
    system("cls");
    
    for (int i=0;i<account_count;i++){     // for the view of all accounts
        printf("Account holder name: %s\n",account[i].name);  
        // for the use   of the accont6 number 
        
        printf("account number is %d\n",account[i].account_number);
        printf("balance is %2f  is : \n",account[i].balance);
    }

}
void transfer_money(){
    system("cls");
    int acc_no;
    printf("enter the account number: \n");
    scanf("%d",&acc_no);
    if (account_count<0){
        printf("no account availabe at this system ! plese create the account at firsrt: ");
        return 0;
    }
    int dest_no;
    // take the transefer acccount number
    printf("enter the transefer account numbeer: ");
    scanf("%d",&dest_no);
    dest_no==account[i].count
    printf(" the money transfer source account to dest account ",dest_no);
}