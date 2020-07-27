#include<stdio.h>

#define MAXSIZE 10000

int isPerfect(int);

int main(void)
{
        printf("====== Perfect Number ======\n");
        for(int i = 2; i <= MAXSIZE; i++)
                if(isPerfect(i))
                        printf(": %d\n", i);

        return 0;
}

int isPerfect(int n)
{
        int divisor[MAXSIZE];
        int count = 0;
        int sum = 0;

        for(int i = 1; i <= n/2; i++)
        {
                if(n % i == 0)
                {
                        divisor[count] = i;
                        sum += i;
                        count++;
                }                                                                                                                                                                                           
        }

        if(sum == n)
        {
                for(int i = 0; i < count; i++)
                        printf("%d ", divisor[i]);

                return 1;
        }

        else
                return 0;
}

