#include<stdio.h>                                                                                                                                                                                           

int isValidTriangle(int, int, int);

int main(void)
{
        int a, b, c;

        printf("Please input three lengths of side of a triangle (space-split) : ");
        scanf("%d %d %d", &a, &b, &c);

        if(isValidTriangle(a, b, c))
                printf("The values inputted could represent the sides of a triangle.\n");
        else
                printf("The values inputted could not represent the sides of a triangle.\n");

        return 0;
}

int isValidTriangle(int a, int b, int c)
{
        if(a + b < c)
                return 0;

        if(b + c < a)
                return 0;

        if(a + c < b)
                return 0;

        return 1;
}
