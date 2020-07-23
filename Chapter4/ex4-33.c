#include <stdio.h>                                                                                                                                                                                          

int main(void)
{
        int temp;

        printf("%8s%10s\n", "Decimal", "Roman");

        for(int i = 1; i <= 100; i++)
        {
                temp = i;

                printf("%8d\t", i);

                if(temp == 50)
                {
                        printf("L");
                        temp = 0;
                }

                if(temp == 100)
                {
                        printf("C");
                        temp = 0;
                }

                while(temp >= 10)
                {
                        printf("X");
                        temp -= 10;
                }

                if(temp >= 5)
                {
                        if(temp % 10 == 9)
                        {
                                printf("IX");
                                temp -= 9;
                        }
                        else
                        {
                                printf("V");
                                temp -= 5;
                        }
                }

                while(temp > 0)
                {
                        if(temp % 10 == 4)
                        {
                                printf("IV");
                                temp -= 4;
                        }
                        else
                        {
                                printf("I");
                                temp--;
                        }
                }
                
                printf("\n");
        }

        return 0;
}                        
