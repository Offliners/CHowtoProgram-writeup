#include<stdio.h>                                                                                                                                                                                           

int isPrime(int);

int main(void)
{
        for(int i = 2; i <= 100; i++)
                if(isPrime(i))
                        printf("%2d ", i);

        printf("\n");

        return 0;
}

int isPrime(int n)
{
        for(int i = 2; i < n; i++)
        {
                if(n % i == 0)
                        return 0;
        }

        return 1;
}
