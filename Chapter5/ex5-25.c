#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        double num[4];
        double max;

        printf("Please input four float numbers\n");
        for(int i = 0; i < 4; i++)
        {
                printf("#%d : ", i + 1);
                scanf("%lf", &num[i]);
        }

        max = num[0];
        for(int i = 1; i < 4; i++)
                if(max < num[i])
                        max = num[i];

        printf("Max float number is %lf\n", max);

        return 0;
}
