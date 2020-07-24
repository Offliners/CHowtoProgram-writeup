#include<stdio.h>                                                                                                                                                                                           

void Menu(void);
void drawRectangle(int, int, char);
void drawLine(int, char);
void drawSquare(int, char);
void drawTriangle(int, char);
void drawDiamond(int, char);

int main(void)
{
        int a, b, select;
        char c;

        while(1)
        {
                Menu();
                printf("Which shape do you want to draw (-1 to end) ? ");
                scanf("%d", &select);

                if(select == -1)
                        break;

                printf("Please input the character to fill the shape : ");
                scanf(" %c", &c);

                switch(select)
                {
                        case 1:
                                printf("Please input width and length of the rectangle (space-split) : ");
                                scanf("%d %d", &a, &b);
                                drawRectangle(a, b, c);
                                break;
                        case 2:
                                printf("Please input length of the line : ");
                                scanf("%d", &a);
                                drawLine(a, c);
                                break;
                        case 3:
                                printf("Please input side of the square : ");
                                scanf("%d", &a);
                                drawSquare(a, c);
                                break;
                        case 4:
                                printf("Please input side of the triangle : ");
                                scanf("%d", &a);
                                drawTriangle(a, c);
                                break;
                        case 5:
                                printf("Please input height of the diamond (height is a odd number): ");
                                scanf("%d", &a);
                                drawDiamond(a/2, c);
                                break;
                        default:
                                printf("Unknown shape!\n");
                                break;
                }
        }

        return 0;
}

void Menu()
{
        printf("====== Shape ======\n");
        printf("1. Rectangle\n");
        printf("2. Line\n");
        printf("3. Square\n");
        printf("4. Triangle\n");
        printf("5. Diamond\n");
        printf("===================\n");
}

void drawRectangle(int a, int b, char c)
{
        for(int i = 0; i < a; i++)
        {
                for(int j = 0; j < b; j++)
                        printf("%c", c);
                printf("\n");
        }
        
        printf("\n");
}

void drawLine(int n, char c)
{
        for(int i = 0; i < n; i++)
                printf("%c", c);

        printf("\n");
}

void drawSquare(int n, char c)
{
        for(int i = 0; i < n; i++)
        {
                for(int j = 0; j < n; j++)
                        printf("%c", c);
                printf("\n");
        }

        printf("\n");
}

void drawTriangle(int n, char c)
{
        for(int i = 0; i < n; i++)
        {
                for(int j = 0; j < n - i - 1; j++)
                        printf(" ");
                for(int k = 0; k < 2 * i + 1; k++)
                        printf("%c", c);
                printf("\n");
        }

        printf("\n");
}

void drawDiamond(int n, char c)
{
        for(int i = 0; i <= n; i++)
        {
                for(int j = 0; j < n - i; j++)
                        printf(" ");
                for(int k = 0; k < 2 * i + 1; k++)
                        printf("%c", c);
                printf("\n");
        }
        
        for(int i = n - 1; i >= 0; i--)
        {
                for(int j = 0; j < n - i; j++)
                        printf(" ");
                for(int k = 0; k < 2 * i + 1; k++)
                        printf("%c", c);
                printf("\n");
        }
        
        printf("\n");
}
