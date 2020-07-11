#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int num;

        printf("Please input an integer : ");
        scanf("%d", &num);

        if(num % 2)
                printf("%d is odd\n", num);
        else
                printf("%d is even\n", num);

        return 0;
}
