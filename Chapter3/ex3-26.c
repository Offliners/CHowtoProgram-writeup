#include<stdio.h>                                                                                                                                                                                           

int maxNum(int [], int);

int main(void)
{
        int num[10];

        for(int i = 0; i < 10; i++)
        {
                printf("No.%d : ", i + 1);
                scanf("%d", &num[i]);
        }

        printf("The largest number is %d\n", num[maxNum(num, 10)]);

        num[maxNum(num, 10)] = 0;
        printf("The second largest number is %d\n", num[maxNum(num, 10)]);

        return 0;
}

int maxNum(int arg[], int numSize)
{
        int max = arg[0];
        int maxIndex = 0;

        for(int i = 1; i < numSize; i++)
        {
                if(arg[i] > max)
                {
                        max = arg[i];
                        maxIndex = i;
                }
        }

        return maxIndex;
}
