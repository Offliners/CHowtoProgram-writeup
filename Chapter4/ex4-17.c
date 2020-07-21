#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int account, limit, balance;

        printf("Input account number : ");
        scanf("%d", &account);

        printf("Input credit limit before the recession : ");
        scanf("%d", &limit);

        printf("Input current balance : ");
        scanf("%d", &balance);

        printf("Customer's new credit limit is $%d\n", limit / 2);

        if(balance > limit / 2)
                printf("Customer with account %d has exceeded their credit limit!!\n", account);

        return 0;
}
