#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double C, F;

        printf("Please input Celsius degree : ");
        scanf("%lf", &C);

        F = 9 * C / 5 + 32;

        printf("Celsius degree : %lf\n", C);
        printf("Fahrenheit degree : %lf\n", F);

        return 0;
}
