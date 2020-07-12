#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        printf("N\tN^2\tN^3\tN^4\n");

        for(int i = 0; i < 11; i++)
                printf("%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i);

        return 0;
}
