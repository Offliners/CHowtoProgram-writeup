#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

int main(void)
{
        double principal = 1000.0;
        double rate;

        for(unsigned int i = 5; i <= 10; i++)
        {
                rate = i / 100.0;
                printf("==== Interest at %.2lf percent ====\n", rate);
                printf("%4s%21s\n", "Years", "Amount on deposit");

                for(unsigned int year = 1; year <= 10; year++)
                        printf( "%4d%21.2f\n", year, principal * pow(1 + rate, year));
        }

        return 0;
}
