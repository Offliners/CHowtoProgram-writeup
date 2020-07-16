#include<stdio.h>                                                                                                                                                                                           

#define PI 3.14159

int main(void)
{
        double radius;

        printf("Please input a radius of a circle : ");
        scanf("%lf", &radius);

        printf("Diameter : %lf\n", 2 * radius);
        printf("Circumference : %lf\n", 2 * radius * PI);
        printf("Area : %lf\n", radius * radius * PI);

        return 0;
}
