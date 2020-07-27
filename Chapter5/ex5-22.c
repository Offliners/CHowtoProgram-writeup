#include<stdio.h>                                                                                                                                                                                           
#include<stdlib.h>

int main(void)
{
        int num;
        int data[5];
        int count = 0;

        printf("Please input an integer (1 ~ 32767) : ");
        scanf("%d", &num);

        if(num < 1 || num > 32767)
        {
                printf("Error input!\n");
                exit(0);
        }

        while(num > 0)
        {
                data[count] = num % 10;
                num /= 10;
                count++;
        }

        for(int i = count - 1; i >= 0; i--)
                printf("%d ", data[i]);
        printf("\n");

        return 0;
}
