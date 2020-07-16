#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int side;

        printf("Enter the side of square : ");
        scanf("%d", &side);

        for(int i = 0; i < side; i++)
        {
                for(int j = 0; j < side; j++)
                        printf("*");
                printf("\n");
        }

        return 0;
}
