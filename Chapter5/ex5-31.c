#include<stdio.h>                                                                                                                                                                                           
#include<stdlib.h>
#include <time.h>

int flip(void);

int main(void)
{
        int total = 0;
        srand(time(NULL));

        for(int i = 0; i < 100; i++)
        {
                if(flip())
                {
                        printf("Test %d : Hands\n", i + 1);
                        total++;
                }
                else
                        printf("Test %d : Tails\n", i + 1);
        }

        printf("====== Result ======\n");
        printf("Hands rate : %d\n", total);
        printf("Tails rate : %d\n", 100 - total);

        return 0;
}

int flip()
{
        int coin = rand() % 2;

        if(coin)
                return 1;
        else
                return 0;
}
