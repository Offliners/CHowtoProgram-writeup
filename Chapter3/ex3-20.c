#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int hour;
        double rate;
        double salary;

        while(1)
        {
                printf("Enter # of hours worked (-1 to quit) : ");
                scanf("%d", &hour);

                if(hour == -1)
                        break;

                printf("Enter hourly rate of the worker ($00.00) : ");
                scanf("%lf", &rate);

                if(hour > 40)
                        salary = 40 * rate + (hour - 40) * rate * 1.5;
                else
                        salary = hour * rate;

                printf("Salary is $ %.2lf\n\n", salary);
        }

        return 0;
}
