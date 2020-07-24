#include<stdio.h>                                                                                                                                                                                           

int isRight(int, int, int);

int main(void)
{
        int s1, s2, s3;

        printf("Please input lengths of a triangle (space-split) : ");
        scanf("%d %d %d", &s1, &s2, &s3);

        if(isRight(s1, s2, s3))
                printf("The values inputted could represent the sides of a right triangle.\n");
        else
                printf("The values inputted could not represent the sides of a right triangle.\n");

        return 0;
}

int isRight(int a, int b, int c)
{
        if(a * a + b * b == c * c)
                return 1;
        else if(a * a + c * c == b * b)
                return 1;
        else if(b * b + c * c == a * a)
                return 1;
        else
                return 0;
}
