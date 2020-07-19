#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;

        for(int i = 1; i <= 100; i++)
        {
                count1 += i;
                count2 += i * i;
                count3 += i * i * i;
        }

        printf("Sum : %d\n", count1);
        printf("Square sum : %d\n", count2);
        printf("Cube sum : %d\n", count3);

        return 0;
}
