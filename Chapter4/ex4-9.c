#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int num;
        int data;
        double sum = 0;

        printf("Please amount of data : ");
        scanf("%d", &num);

        for(int i = 0; i < num; i++)
        {
                printf("Data#%d : ", i + 1);
                scanf("%d", &data);
                sum += data;
        }

        printf("Average : %lf\n", sum / num);

        return 0;
}
