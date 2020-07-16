#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int num = 1;

        while(num == 1 || num == 2)
        {
                printf("Enter an integer (if integer is equal to 1 or 2, the program will quit!) : ");
                scanf("%d", &num);
        }

        return 0;
}
