#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double loan;
        double rate;
        int days;

        while(1)
        {
                printf("Enter loan principal (-1 to quit) : ");
                scanf("%lf", &loan);

                if(loan == -1)
                        break;

                printf("Enter interest rate : ");
                scanf("%lf", &rate);
                printf("Enter term of the loan in days : ");
                scanf("%d", &days);

                printf("The interest charge is $ %.2lf\n\n", loan * rate * days / 365);
        }

        return 0;
}
