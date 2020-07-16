#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        for(int i = 1; i <= 500; i++)
        {
                printf("$");
                if(i % 50 == 0)
                        printf("\n");
        }

        return 0;
}
