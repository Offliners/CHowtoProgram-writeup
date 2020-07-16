#include<stdio.h>                                                                                                                                                                                           

void inputDate(int []);
int calAge(int [], int []);

int main(void)
{
        int birthday[3];
        int nowaday[3];
        int age, maxHR;

        printf("======Birthday======\n");
        inputDate(birthday);
        printf("======Nowaday======\n");
        inputDate(nowaday);

        age = calAge(birthday, nowaday);
        maxHR = 220 - age;

        printf("\n======Result======\n");
        printf("Age : %d\n", age);
        printf("Max Heart Rate : %d\n", maxHR);
        printf("Target Heart Rate : %d ~ %d\n", (int)(maxHR * 0.5),(int)(maxHR * 0.85));

        return 0;
}

void inputDate(int date[])
{
        printf("Please input year : ");
        scanf("%d", &date[0]);
        printf("Please input month : ");
        scanf("%d", &date[1]);
        printf("Please input day : ");
        scanf("%d", &date[2]);
}

int calAge(int d1[], int d2[])
{
        if(d1[1] > d2[1])
                return d2[0] - d1[0] - 1;
        else
                return d2[0] - d1[0];
}
