#include<stdio.h>                                                                                                                                                                                           

int sum(int, int, int);
int multiply(int, int, int);
int min(int, int, int);
int max(int, int, int);

int main(void)
{
        int num1, num2, num3;
        int total = 0;

        printf("Enter three difference integers : (space-splt)");
        scanf("%d %d %d", &num1, &num2, &num3);

        total = sum(num1, num2, num3);
        printf("Sum is %d\n", total);
        printf("Average is %lf\n", (double)total / 3);
        printf("Product is %d\n", multiply(num1, num2, num3));
        printf("Smallest is %d\n", min(num1, num2, num3));
        printf("Largest is %d\n", max(num1, num2, num3));

        return 0;
}

int sum(int a, int b, int c)
{
        return a + b + c;
}

int multiply(int a, int b, int c)
{
        return a*b*c;
}

int min(int a, int b, int c)
{
        if(a < b)
        {
                if(a < c)
                        return a;
                else
                        return c;
        }

        if(b < c)
                return b;

        return c;
}

int max(int a, int b, int c)
{
        if(a > b)
        {
                if(a > c)
                        return a;
                else
                        return c;
        }
        
        if(b > c)
                return b;

        return c;  
}
