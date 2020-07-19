#include<stdio.h>                                                                                                                                                                                           

int Factorial(int);

int main(void)
{
        for(int i = 1; i <= 5; i++)
                printf("%d! = %d\n", i, Factorial(i));

        return 0;
}

int Factorial(int n)
{
        if ((n == 1)||(n == 0))
                return 1;
        else
                return Factorial(n - 1) * n;
}
