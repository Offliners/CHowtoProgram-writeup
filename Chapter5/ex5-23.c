#include<stdio.h>                                                                                                                                                                                           
#include<stdlib.h>

int secSince12(int, int, int);

int main(void)
{
        int sec, min, hour;
        int result = 0;

        printf("Please input current time (hour minute second) : ");
        scanf("%d %d %d", &hour, &min, &sec);

        if(hour > 23 || hour < 0 || min > 59 || min < 0 || sec > 59 || sec < 0)
        {
                printf("Error time!\n");
                exit(0);
        }

        result = secSince12(hour, min, sec);

        printf("It has been %d seconds since 12 O'clock.\n", result);

        return 0;
}

int secSince12(int h, int m, int s)
{
        if(h >= 12)
                h -= 12;

        return (h * 3600 + m * 60 + s);
}
