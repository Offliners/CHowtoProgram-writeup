#include<stdio.h>                                                                                                                                                                                           

int total(int);

int main(void)
{
        int num;

        printf("Please input an integer : ");
        scanf("%d", &num);

        printf("Sum = %d\n", total(num));

        return 0;
}

int total(int n)
{
        int sum = 0;

        while(n > 0)
        {
                sum += (n % 10);
                n /= 10;
        }

        return sum;
}
