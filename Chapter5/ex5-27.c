#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

double isRealRoot(double, double, double);

int main(void)
{
        double a, b, c, t, x1, x2, img;

        printf("ax² + bx + c = 0\n");
        printf("Please coefficients of the quadratic equation (space-split) : ");
        scanf("%lf %lf %lf", &a, &b, &c);

        t = isRealRoot(a, b, c);

        if(t > 0)
        {
                printf("The quadratic equation has two different real roots\n");
                t = sqrt(t);
                x1 = (-b + t) / (2 * a);
                x2 = (-b - t) / (2 * a);
                printf("roots : %lf, %lf\n", x1, x2);
        }
        else if(t == 0)
        {
                printf("The quadratic equation has two same real roots\n");
                x1 = -b / (2 * a);
                printf("roots : %lf\n", x1);
        }
        else
        {
                printf("The quadratic equation doesn't have real roots\n");
                x1 = -b / (2 * a);
                img = sqrt(-t) / (2 * a);

                if(img > 0)
                        printf("roots : %lf + %lfi, %lf - %lfi\n", x1, img, x1, img);
                else
                        printf("roots : %lf + %lfi, %lf - %lfi\n", x1, -img, x1, img);
        }

        return 0;
}

double isRealRoot(double a, double b, double c)
{
        return (b * b - 4 * a * c);
}
