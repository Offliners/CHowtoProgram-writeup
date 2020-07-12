#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double total;
        char *month;

        while(1)
        {
                printf("Enter total amount collected (-1 to quit) : ");
                scanf("%lf", &total);

                if(total == -1)
                        break;

                printf("Enter name of month : ");
                scanf("%s", month);

                printf("Total Collections : %.2lf\n", total);
                printf("Sales : %.2lf\n", total / 1.09);
                printf("County Sales Tax : %.2lf\n", total / 1.09 * 0.05);
                printf("State Sales Tax : %.2lf\n", total / 1.09 * 0.04);
                printf("Total Sales Tax : %.2lf\n", total / 1.09 * 0.09);
        }

        return 0;
}
