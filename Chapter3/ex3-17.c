#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double account;
        double mortgage;
        double term;
        double rate;

        while(1)
        {
                printf("Enter account number (-1 to end) : ");
                scanf("%lf", &account);

                if(account == -1)
                        break;

                printf("Enter mortgage amount (in dollars) : ");
                scanf("%lf", &mortgage);
                printf("Enter mortgage term (in years) : ");
                scanf("%lf", &term);
                printf("Enter interest rate (as a decimal) : ");
                scanf("%lf", &rate);

                printf("The monthly payable interest $ %d\n\n", (int)(mortgage * (1 + rate * term) / (term * 12)));
        }

        return 0;
}
