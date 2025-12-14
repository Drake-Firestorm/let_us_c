/* Bank customer details */

#include<stdio.h>

#define MAX_CUSTOMERS 5
#define NAME_LEN 50
#define LESS_BALANCE 1000.0

struct Bank
{
    int account_no;
    char name[NAME_LEN];
    float balance;
};

void clear_input_buffer();
size_t get_data(struct Bank *);
void less_balance(struct Bank *, size_t);
void deposit_withdrawal(struct Bank *, size_t n, int, float, int);


int main()
{
    int act_no, code;
    float amt;
    size_t n_customers;
    struct Bank bk[MAX_CUSTOMERS];

    n_customers = get_data(bk);

    less_balance(bk, n_customers);

    printf("Enter account no, amount and 1-deposit/0-withdrawl: ");
    scanf("%d %f %d", &act_no, &amt, &code);
    deposit_withdrawal(bk, n_customers, act_no, amt, code);

    return 0;
}

void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

size_t get_data(struct Bank *b)
{
    size_t i = 0;
    char ans;

    while(i < MAX_CUSTOMERS)
    {
        printf("Enter account number: ");
        scanf("%d", &b[i].account_no);

        clear_input_buffer();
        printf("Enter customer name: ");
        scanf("%s", b[i].name);
        
        clear_input_buffer();
        printf("Enter amount: ");
        scanf("%f", &b[i].balance);

        clear_input_buffer();
        printf("Continue? Press 'n' to stop: ");
        scanf("%c", &ans);
        if(ans == 'n')
            break;

        i++;
        clear_input_buffer();
    }

    i++;
    return i;
}

void less_balance(struct Bank *b, size_t n)
{
    size_t i;

    printf("Accounts with balance less than %f:\n", LESS_BALANCE);
    for(i = 0; i < n; i++)
    {
        if(b[i].balance < LESS_BALANCE)
            printf(
                "Account number: %d\t Name: %s\t Balance: %f\n"
                , b[i].account_no, b[i].name, b[i].balance
            );
    }
}

void deposit_withdrawal(struct Bank *b, size_t n, int act_no, float amt, int code)
{
    int j = 0;
    size_t i;

    for(i = 0; i < n; i++)
    {
        if(b[i].account_no == act_no)
        {
            j = 1;

            if(code == 1)
                b[i].balance += amt;
            else if(code == 0)
            {
                if(b[i].balance - amt < LESS_BALANCE)
                    printf("The balance is insufficient for the specified withdrawal\n");
                else
                    b[i].balance -= amt;
            }
            else
                printf("Wrong code\n");
        }
    }

    if(j == 0)
        printf("Account number not found\n");
}
