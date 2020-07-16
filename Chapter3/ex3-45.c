#include<stdio.h>                                                                                                                                                                                           

int Factorial(int);
double NaturalLog(void);


int main(void)
{
        int num;

        printf("Please input a positive integer : ");
        scanf("%d", &num);

        printf("%d! = %d\n", num, Factorial(num));
        printf("e = %lf\n", NaturalLog());

        return 0;
}

int Factorial(int n)
{
        if ((n == 1)||(n == 0))
                return 1;
        else
                return Factorial(n - 1) * n;
}

double NaturalLog(void)
{
        double e = 0;

        for(int i = 0; i < 10; i++)
        {
                e += 1.0 / Factorial(i);
        }

        return e;
}
