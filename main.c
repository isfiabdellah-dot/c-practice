#include <stdio.h>
#include <stdlib.h>   // For rand() and srand()
#include <time.h>     // For time()
#include <string.h>
void account_setup(char name[100],double balance,int account_number);
void display_menu();
int safe_reader();
double get_user_amount();
double check_balance(double balance);
void display_details_account(char name[100],double balance,int account_number);

int main(){
    double balance;
    double amount;
    char name[100];
    int account_number;
    int choice;

    account_setup(name, balance, account_number);
    do{
        choice = safe_reader();
        switch(choice){
            case 1 :
                amount = get_user_amount();
                balance += amount;
                printf("You deposit %.2lf$\n",amount);
                break;
            case 2 : 
                printf("Withdraw Funds :\n");
                amount = get_user_amount();
                if(balance >= amount){
                    balance -=amount;
                }else{
                    printf("Insufficient funds!\n");
                }                
                break;
            case 3 : 
                check_balance(balance);break;
            case 4 : 
                display_details_account(name,balance,account_number);break;
            default: return 0;
        }
    }while(choice!=5);

    printf("Exit\n");
    
}

void account_setup(char name[100],double balance,int account_number){
    char input[100];
    srand(time(NULL));
    account_number = rand()% 900000 + 100000;
    balance = 0;
    do{
        printf("Enter your full name :");
        fgets(input,sizeof(input),stdin);
        input[strlen(input)-1]='\0';
        strcpy(name, input);
        printf(" name :%s\n" ,name);
        if(strlen(name)!=0 && sscanf(name,"%d",&input)!=0){
            break;
        }else{
            printf("error wrong input !!\n");
        }
    }while(1);
};

void display_details_account(char name[100],double balance,int account_number){
    printf("==========user detail account==========\n");
    printf("user full name : %s\n",name);
    printf("user account number : %d\n",account_number);
    printf("user balance : %.2lf$\n",balance);
};

void display_menu(){
    printf("\n=== WELCOME TO C-BANK ===\n");
    printf("1. Deposit Funds\n");
    printf("2. Withdraw Funds\n");
    printf("3. Check Balance\n");
    printf("4. View Account Details\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5):");
};

int safe_reader(){
    char input[100];
    int choice;
    while(choice >5 || choice <1 ){
        display_menu();
        fgets(input,sizeof(input),stdin);
        sscanf(input,"%d",&choice);

        if(choice >5 && choice <1){
            printf("Error wrong input !\n");
            continue;
        }
    }
    return choice;
};

double get_user_amount(){
    char input[100];
    double amount;
    do{
        printf("Enter amount: $\n");
        fgets(input,sizeof(input),stdin);
        sscanf(input,"%lf",&amount);
        // printf("%.2lf\n", deposit);
        if(sscanf(input,"%lf",&amount)==0){
            printf("Error wrong input !!\n");
        }else if(amount < 0){
            printf("Error negatif amount !!\n");
        }
    }while(sscanf(input,"%lf",&amount)==0 && amount <0);

    return amount;
};

double check_balance(double balance){
    printf("Your balance is %.2lf $\n",balance);
}










// *****************
//     int option = 0;
//     float weight = 0.00f;
    
//     while(1){
//         printf("1-Convert Kilograms to Pounds\n");
//         printf("2-Convert Pounds to Kilograms\n");
//         printf("3-Exit\n");
//         printf("Type a number (1, 2, or 3) to choose:\n");
//         scanf("%d", &option);

//         if(option==1){
//             printf("Enter the weight in Kilograms (kg):");
//             scanf("%f", &weight); 
//             printf("%.2f lbs\n",weight * 2.20462) ;
//         }else if(option==2){
//             printf("Enter the weight in Pounds (lbs):");
//             scanf("%f", &weight); 
//             printf("%.2f kg\n",weight / 2.20462);
//         }else if(option==3){
//             printf("Exit\n");
//             break;
//         }else{
//             printf("Error wrong number !!\n");
//         }
//     }