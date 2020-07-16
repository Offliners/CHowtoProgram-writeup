#include<stdio.h>                                                                                                                                                                                           

int bin2dec(int);

int main(void)
{
        int bin;

        printf("Please input binary number (under 5 digits) : ");
        scanf("%d", &bin);

        printf("Decimal is %d\n", bin2dec(bin));

        return 0;
}

int bin2dec(int num)
{
        int total = 0;
        int exp = 1;
        int rem;

        while(num > 0)
        {
                rem = num % 10;
                num /= 10;
                total += rem * exp;
                exp *= 2;
        }

        return total;
}
