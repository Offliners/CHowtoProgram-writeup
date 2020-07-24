#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

double hypotenuse(double, double);

int main(void)
{
        double side1, side2, hypo;

        printf("Please input lengths of tow sides (space-split) : ");
        scanf("%lf %lf", &side1, &side2);

        hypo = hypotenuse(side1, side2);
        printf("The length of the hypotenuse is %.2f\n", hypo);

        return 0;
}

double hypotenuse(double s1, double s2)
{
        return sqrt(s1 * s1 + s2 * s2);
}
