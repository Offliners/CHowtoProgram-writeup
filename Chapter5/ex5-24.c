#include<stdio.h>                                                                                                                                                                                           

double toYen(double);
double toEuro(double);

int main(void)
{
        double usd;

        printf("====== Value of Currency ======\n");
        printf("1 USD = 118.87 Yen\n");
        printf("1 USD = 0.92 Euro\n");
        printf("===============================\n");

        printf("Please input the amount of money in USD : ");
        scanf("%lf", &usd);

        printf("%lf USD = %lf Yen\n", usd, toYen(usd));
        printf("%lf USD = %lf Euro\n", usd, toEuro(usd));

        return 0;
}

double toYen(double n)
{
        return n * 118.87;
}

double toEuro(double n)
{
        return n * 0.92;
}
