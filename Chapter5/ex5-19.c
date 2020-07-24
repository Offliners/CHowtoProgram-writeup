#include<stdio.h>                                                                                                                                                                                           

void drawRectangle(int, int);

int main(void)
{
        int width, length;

        printf("Please input width and length of a rectangle (space-split) : ");
        scanf("%d %d", &width, &length);

        drawRectangle(width, length);

        return 0;
}

void drawRectangle(int a, int b)
{
        for(int i = 0; i < a; i++)
        {
                for(int j = 0; j < b; j++)
                        printf("*");
                printf("\n");
        }
}
