#include<stdio.h>                                                                                                                                                                                           

int isPrime(int);

int main(void)
{
        int num;

        printf("Please input an integer : ");
        scanf("%d", &num);

        if(num == 1)
                printf("1 is neither a prime or a composite number\n");
        else if(isPrime(num))
                printf("%d is a prime number\n", num);
        else
                printf("%d is a composite number\n", num);

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
