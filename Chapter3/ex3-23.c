#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int counter = 0;
        int num[10];

        for(int i = 0; i < 10; i++)
        {
                printf("#%d : ", i + 1);
                scanf("%d", &num[i]);
        }

        int max = *num;

        for(int i = 0; i < 10; i++)
                if(num[i] > max)
                        max = num[i];

        printf("The largest number : %d\n", max);

        return 0;
}
