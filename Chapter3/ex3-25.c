#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        printf("A\tA+3\tA+6\tA+9\n");

        for(int i = 1; i < 6; i++)
                printf("%d\t%d\t%d\t%d\n", i*7, i*7 + 3, i*7 + 6, i*7 + 9);

        return 0;
}
