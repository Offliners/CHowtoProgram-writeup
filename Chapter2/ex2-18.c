#include<stdio.h>                                                                                                                                                                                           

int compare(int, int);

int main(void)
{
        int num1, num2;

        printf("Please input two integers (space-split) : ");
        scanf("%d %d", &num1, &num2);

        if(compare(num1, num2))
                printf("Max : %d\n", num1);
        else
                printf("Max : %d\n", num2);
}

int compare(int a, int b)
{
        if(a > b)
                return 1;
        else
                return 0;
}
