#include<stdio.h>                                                                                                                                                                                           

int min(int, int, int);
int max(int, int, int);

int main(void)
{
        int num1, num2, num3;

        printf("Enter three difference integers  (space-splt) : ");
        scanf("%d %d %d", &num1, &num2, &num3);

        printf("Smallest number is %d\n", min(num1, num2, num3));
        printf("Largest number is %d\n", max(num1, num2, num3));

        return 0;
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
