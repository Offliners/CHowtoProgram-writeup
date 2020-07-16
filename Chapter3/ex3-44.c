#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int a, b, c;

        printf("Please input three lengths of side of a triangle (space-split) : ");
        scanf("%d %d %d", &a, &b, &c);

        if(a == b && b == c)
                printf("The values inputted could represent the sides of a regular triangle.\n");
        else
                printf("The values inputted could not represent the sides of a regular triangle.\n");

        return 0;
}
