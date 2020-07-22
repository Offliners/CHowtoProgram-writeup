#include<stdio.h>                                                                                                                                                                                           

double calPi(int);

int main(void)
{
        for(int i = 0; i < 200000; i++)
                if(i % 1000 == 0)
                        printf("Pi calculated using %d terms = %f\n", i, calPi(i));

        return 0;
}

double calPi(int n)
{
        double pi = 4;
        int divisor;

        for(int i = 1; i < n; i++)
        {
                divisor = 2 * i + 1;
                if(i % 2)
                        pi -= 4.0 / divisor;
                else
                        pi += 4.0 / divisor;
        }

        return pi;
}
