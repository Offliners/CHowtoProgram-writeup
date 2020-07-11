#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int num1, num2;

        printf( "Input two numbers (space-split): " );
        scanf("%d %d", &num1, &num2);

        if(num1 % num2)
                printf( "%d is a not multiple of %d\n", num1, num2);
        else
                printf( "%d is a multiple of %d\n", num1, num2);

        return 0;
}
