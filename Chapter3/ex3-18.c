#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double sales;

        while(-1)
        {
                printf("Enter sales in dollars (-1 to quit) : ");
                scanf("%lf", &sales);

                if(sales == -1)
                        break;

                printf("Salary is : $ %.2lf\n\n", 200 + sales * 0.09);
        }

        return 0;
}
