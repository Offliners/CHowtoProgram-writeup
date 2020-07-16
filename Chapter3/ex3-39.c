#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int row = 1;

        for(int i = 1; i <= 64; i++)
        {
                printf("* ");

                if(i % 8 == 0)
                {
                        printf("\n");
                        row++;

                        if(row % 2 == 0)
                                printf(" ");
                }
        }

        return 0;
}
