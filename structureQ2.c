#include <stdio.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};

// Function to print customers with balance below 100
void printLowBalance(struct Customer c[], int n) {
    printf("\nCustomers with balance below Rs.100:\n");
    for(int i = 0; i < n; i++) {
        if(c[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", c[i].acc_no, c[i].name);
        }
    }
}

// Function to handle deposit or withdrawal
void updateBalance(struct Customer c[], int n, int acc_no, float amount, int code) {
    for(int i = 0; i < n; i++) {
        if(c[i].acc_no == acc_no) {
            if(code == 1) { // Deposit
                c[i].balance += amount;
                printf("\nAmount deposited successfully. New balance = %.2f\n", c[i].balance);
            } else if(code == 0) { // Withdrawal
                if(c[i].balance < amount) {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                } else {
                    c[i].balance -= amount;
                    printf("\nWithdrawal successful. New balance = %.2f\n", c[i].balance);
                }
            }
            return;
        }
    }
    printf("\nAccount not found.\n");
}

int main() {
    struct Customer c[10];
    int n;

    printf("Enter number of customers (max 10): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for customer %d\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &c[i].acc_no);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    printLowBalance(c, n);

    int acc_no, code;
    float amount;
    printf("\nEnter account number for transaction: ");
    scanf("%d", &acc_no);
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);

    updateBalance(c, n, acc_no, amount, code);

    return 0;
}
