#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        printf("================================ ASCII Table ================================\n");
        for (int i = 0; i < 128; i++)
        {
                if (i == 13)
                        continue;
                printf("%3d %c\t", i, i);
                if (i % 10 == 9)
                        printf("\n");
        }
        printf("\n");

        return 0;
}
