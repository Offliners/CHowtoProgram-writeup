#include<stdio.h>                                                                                                                                                                                           

# define printStar printf("*");
# define printSpace printf(" ");
# define printNewline printf("\n");

int main(void)
{
        int size, row;

        while(1)
        {
                printf("Please input the size of Rhombus (1 ~ 19) : ");
                scanf("%d", &size);

                if((size % 2 != 0) && (size > 0) && (size <= 19))
                        break;
                else
                        printf("Error input! The size must be between 1 to 19 and oven!\n");
        }

        row = size / 2;
        for(int i = 0; i <= row; i++)
        {
                for(int j = 0; j < row - i; j++)
                        printSpace;
                for(int k = 0; k < (1 + i * 2); k++)
                        printStar;
                printNewline;
        }

        for(int i = row - 1; i >= 0; i--)
        {
                for(int j = 0; j < row - i; j++)
                        printSpace;
                for(int k = 0; k < (1 + i * 2); k++)
                        printStar;
                printNewline;
        }


        return 0;
}
