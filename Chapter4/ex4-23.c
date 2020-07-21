#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

int main(void)
{
        int principal = 100000;
        int rate;

        for(unsigned int i = 5; i <= 10; i++)
        {
                rate = i + 100;
                printf("==== Interest at %.2lf percent ====\n", i / 100.0);
                printf("%4s%21s\n", "Years", "Amount on deposit");

                for(unsigned int year = 1; year <= 10; year++)
                        printf( "%4d%21.2f\n", year, principal * pow(rate / 100.0, year) / 100.0);
        }

        return 0;
}
