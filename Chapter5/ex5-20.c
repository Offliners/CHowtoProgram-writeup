#include<stdio.h>                                                                                                                                                                                           

void fillCharacter(int, int, char);

int main(void)
{
        int width, length;
        char c;

        printf("Please input character to fill the rectangle : ");
        scanf("%c", &c);
        printf("Please input width and length of a rectangle (space-split) : ");
        scanf("%d %d", &width, &length);

        fillCharacter(width, length, c);

        return 0;
}

void fillCharacter(int a, int b, char c)
{
        for(int i = 0; i < a; i++)
        {
                for(int j = 0; j < b; j++)
                        printf("%c", c);
                printf("\n");
        }
}
