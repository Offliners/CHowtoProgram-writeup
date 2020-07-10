#include<stdio.h>                                                                                                                                                                                           

double terminalV(double , double, double);
double displacement(double, double, double);


int main(void)
{
        double u, a, t;

        printf("Please input initial velocity, acceleration and time (space-split) : ");
        scanf("%lf %lf %lf", &u, &a, &t);

        printf("Terminal Velocity = %lf\n", terminalV(u, a, t));
        printf("Displacement = %lf\n", displacement(u, a, t));

        return 0;
}

double terminalV(double u, double a, double t)
{
        return u + a*t;
}

double displacement(double u, double a, double t)
{
        return u*t + 0.5*a*t*t;
}
