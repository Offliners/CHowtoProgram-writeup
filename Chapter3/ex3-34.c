#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int row = 10;
        int num = 1;

        for(int i = 1; i <= row; i++)
        {
                for(int j = 1; j <= i; j++)
                {
                        printf("%3d", num);
                        num++;
                }
                printf("\n");
        }

        return 0;
}
