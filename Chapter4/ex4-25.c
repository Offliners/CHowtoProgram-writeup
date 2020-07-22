#include<stdio.h>                                                                                                                                                                                           

long long dec2bin(int);

int main(void)
{
        printf("%10s\t%10s\t%8s\t%8s\n", "Decimal", "Binary", "Octal", "Hex");

        for(int i = 1; i <= 256; i++)
                printf("%8d\t%10lld\t%8o\t%8X\n", i, dec2bin(i), i, i);

        return 0;
}

long long dec2bin(int n)
{
        long long bin = 0;
        int rem, i = 1;

        while(n != 0)
        {
                rem = n % 2;
                n /= 2;
                bin += rem * i;
                i *= 10;
        }

        return bin;
}
