#include<stdio.h>                                                                                                                                                                                           
#include<stdlib.h>

int toQualityPoints(int);

int main(void)
{
        int grade;

        printf("Please input the grade : ");
        scanf("%d", &grade);

        if(grade > 100 || grade < 0)
        {
                printf("Error grade!\n");
                exit(0);
        }

        printf("The quality points of the students is %d\n", toQualityPoints(grade));

        return 0;
}

int toQualityPoints(int n)
{
        switch(n / 10)
        {
                case 10:
                case 9:
                        return 4;
                case 8:
                        return 3;
                case 7:
                        return 2;
                case 6:
                        return 1;
                default:
                        return 0;
        }
}
