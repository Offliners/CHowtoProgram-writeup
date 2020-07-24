#include<stdio.h>                                                                                                                                                                                           

int isEven(int);

int main(void)
{
        int num;

        while(1)
        {
                printf("Please input a positive integer (Ctrl + d to quit) : ");

                if(scanf("%d", &num) == EOF)
                {
                        printf("\n");
                        break;
                }

                if(isEven(num))
                        printf("%d is an even number\n", num);
                else
                        printf("%d is not an even number\n", num);
        }

        return 0;
}

int isEven(int n)
{
        if(n % 2)
                return 0;
        else
                return 1;
}
