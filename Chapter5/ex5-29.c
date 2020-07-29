#include<stdio.h>                                                                                                                                                                                           

int gcd(int, int);
int lcm(int, int, int);

int main(void)
{
        int num1, num2;

        printf("Please input two integers (space-split) : ");
        scanf("%d %d", &num1, &num2);

        printf("(%d, %d) = %d\n", num1, num2, gcd(num1, num2));
        printf("[%d, %d] = %d\n", num1, num2, lcm(num1, num2, gcd(num1, num2)));

        return 0;
}

int gcd(int a, int b)
{
        if(a % b == 0)
                return b;
        else
                return gcd(b, a % b);
}

int lcm(int a, int b, int gcd)
{
        return a * b / gcd;
}
