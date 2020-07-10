#include<stdio.h>                                                                                                                                                                                           

int sum(int, int);
int diff(int, int);
int multiply(int, int);
double division(int, int);

int main(void)
{
        int num1, num2;

        printf("Please input two integers (space-split) : ");
        scanf("%d %d", &num1, &num2);

        printf("Sum : %d\n", sum(num1, num2));
        printf("Difference : %d\n", diff(num1, num2));
        printf("Multiply : %d\n", multiply(num1, num2));
        printf("Division : %lf\n", division(num1, num2));

        return 0;
}

int sum(int a, int b)
{
        return a + b;
}

int diff(int a, int b)
{
        return a - b;
}

int multiply(int a, int b)
{
        return a * b;
}

double division(int a, int b)
{
        return (double) a / b;
}
