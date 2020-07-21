#include<stdio.h>                                                                                                                                                                                           

double product(int);

int main(void)
{
        int num, sold;
        double total = 0;

        while(1)
        {
                printf("Please input product number (-1 to exit) : ");
                scanf("%d", &num);

                if(num == -1)
                        break;

                printf("Input number of items sold : ");
                scanf("%d", &sold);

                if(product(num) != -1 && sold > 0)
                        total += product(num) * sold;
        }

        printf("Today $%.2f\n", total);

        return 0;
}

double product(int n)
{
        switch(n)
        {
                case 1:
                        return 2.98;
                case 2:
                        return 4.5;
                case 3:
                        return 9.98;
                case 4:
                        return 4.49;
                case 5:
                        return 6.87;
                default:
                        printf("Invalid product number\n");
                        return -1;
        }
}
