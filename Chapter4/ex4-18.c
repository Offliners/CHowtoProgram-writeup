#include<stdio.h>                                                                                                                                                                                           

void drawBar(int);

int main(void)
{
        int a, b, c, d, e;

        printf("Please input 5 numbers between 1 to 30 (space-splut) : ");
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        drawBar(a);
        drawBar(b);
        drawBar(c);
        drawBar(d);
        drawBar(e);

        return 0;
}

void drawBar(int num)
{
        for(int i = 0; i < num; i++)
                printf("*");

        printf("\n");
}
