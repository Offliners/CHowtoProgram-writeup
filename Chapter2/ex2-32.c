#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double weight, height, BMI;

        printf("Please input your weight (unit : kg) : ");
        scanf("%lf", &weight);
        printf("Please input your height (unit : m) : ");
        scanf("%lf", &height);

        BMI = weight / height / height;
        printf("BMI : %lf\n", BMI);

        if(BMI >= 30)
                printf("Obese\n");
        else if(BMI >= 25 && BMI < 30)
                printf("Overweight\n");
        else if(BMI >= 18.5 && BMI < 25)
                printf("Normal\n");
        else
                printf("Underweight\n");

        return 0;
}
