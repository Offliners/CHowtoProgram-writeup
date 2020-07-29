#include<stdio.h>                                                                                                                                                                                           

int Power(int, int);

int main(void)
{
        int base, exp;

        printf("Please input the base and exponent of the number (space-split) : ");
        scanf("%d %d", &base, &exp);

        printf("%d ^ %d = %d\n", base, exp, Power(base, exp));

        return 0;
}

int Power(int base, int exp)
{
        if(exp == 0)
                return 1;
        else
                return Power(base, exp - 1) * base;
}
