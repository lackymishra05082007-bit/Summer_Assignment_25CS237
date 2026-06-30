#include<stdio.h>
float balance = 10000000;
int pin = 12345 ;
//check balance
void checkbalance(){
    printf("\ncurrent balance: = %.2f\n" , balance);
}
//deposit money
void deposit(){
    float amount ;
    printf("enter the amount you want to deposit:");
    scanf("%f" , &amount);
    if (amount>0){
        balance = balance + amount;
        printf("AMOUNT SUCCESSFULLY DEPOSITED:\n");
        printf("updated balance =%.2f\n" , balance);
    }
    else{
        printf("invalid amount:\n");
    }
}
    //withdraw money
    void withdraw(){
        float amount ;
        printf("enter the amount you want to withdraw:\n");
        scanf("%f" , &amount);
        if(amount<=0){
            printf("INVALID AMOUNT:\n");
        }
        else if(amount>balance){
            printf("INSUFFICIENT AMOUNT:\n");
        }
        else{
            balance -= amount;
            printf("WITHDRAWL SUCCESSFULLY:");
            printf("BALANCE AMOUNT:= %.2f\n" , balance);
        }
    }
    int main(){
        int enteredpin , choice ;
        printf("ATM SIMULATION:\n");
        printf("enter pin:\n");
        scanf("%d" , &enteredpin);
        if(enteredpin!=pin){
            printf("invalid pin:\n");
            return 0;
        }
        do {
            printf("===MENU===\n");
            printf("1.CHECK BALANCE\n");
            printf("2.DEPOSIT MONEY\n");
            printf("3.WITHDRAWL MONEY\n");
            printf("4.EXIT\n");
            printf("enter your choice:\n");
            scanf("%d" , &choice);
            switch (choice){
                case 1:
                    checkbalance();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    printf("THANK YOU FOR VISITING ATM:\n");
                    break;
                default:
                    printf("INVALID CHOICE:\n");
            }    
        }while (choice != 4);
        return 0;
    }    