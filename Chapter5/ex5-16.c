#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

double Area(double, double, double);
int isValid(double, double, double);

int main(void)
{
        double side1, side2, side3;

        printf("Please input lengths of a triangle (space-split) : ");
        scanf("%lf %lf %lf", &side1, &side2, &side3);

        if(isValid(side1, side2, side3))
                printf("Area : %lf\n", Area(side1, side2, side3));
        else
                printf("The values inputted could represent the sides of a triangle.\n");

        return 0;
}

double Area(double s1, double s2, double s3)
{
        double s = (s1 + s2 + s3) / 2;

        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}

int isValid(double a, double b, double c)
{
        if(a + b < c)
                return 0;

        if(b + c < a)
                return 0;

        if(a + c < b)
                return 0;

        return 1;
}
