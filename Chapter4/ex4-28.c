#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double wage = 0;
        double rate, sale, price;
        int paycode, hour, amount;

        while(1)
        {
                printf("====== Paycode ======\n");
                printf("#1 : Manager\n");
                printf("#2 : Hourly Worker\n");
                printf("#3 : Commission Worker\n");
                printf("#4 : Pieceworker\n");
                printf("=====================\n");
                printf("Enter employee paycode (-1 to exit) : ");
                scanf("%d", &paycode);

                if(paycode == -1)
                        break;

                switch(paycode)
                {
                        case 1:
                                printf("Enter the employee's weekly wages : ");
                                scanf("%lf", &wage);
                                break;
                        case 2:
                                printf("Enter the worker's hourly rate : ");
                                scanf("%lf", &rate);
                                printf("Enter the number of hours worked : ");
                                scanf("%d", &hour);
                                if(hour > 40)
                                {
                                        wage = (hour - 40) * (rate * 1.5);
                                        hour = 40;
                                }
                                wage += hour * rate;
                                break;
                        case 3:
                                wage = 250;
                                printf("Enter the worker's weekly sales total : ");
                                scanf("%lf", &sale);
                                wage += sale * 0.057;
                                break;
                        case 4:
                                printf("Enter the price paid per item made : ");
                                scanf( "%lf", &price);
                                printf("Enter the number of items made: ");
                                scanf("%d", &amount);
                                wage = price * amount;
                                break;
                        default:
                                printf("Invalid employee code!\n");
                                break;
                }

                if(paycode >= 1 && paycode <= 4)
                        printf("The employees weekly wage is $%.2f\n\n", wage);
        }

        return 0;
}                    
