#include<stdio.h>                                                                                                                                                                                           

# define printStar printf("*");
# define printSpace printf(" ");
# define printNewline printf("\n");

int main(void)
{
        for(int i = 0; i <= 4; i++)
        {
                for(int j = 0; j < 4 - i; j++)
                        printSpace;
                for(int k = 0; k < (1 + i * 2); k++)
                        printStar;
                printNewline;
        }

        for(int i = 3; i >= 0; i--)
        {
                for(int j = 0; j < 4 - i; j++)
                        printSpace;
                for(int k = 0; k < (1 + i * 2); k++)
                        printStar;
                printNewline;
        }


        return 0;
}
