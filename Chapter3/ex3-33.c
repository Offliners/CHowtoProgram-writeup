#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int side = 5;

        for(int i = 0; i < side; i++)
        {
                for(int j = 0; j < side; j++)
                {
                        if((j == 0 || j == side - 1)||(i == 0 || i == side - 1))
                                printf("*");
                        else
                                printf(" ");
                }
                printf("\n");
        }

        return 0;
}
