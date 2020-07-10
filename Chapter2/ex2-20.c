#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int second;
        int hour, min, sec;

        printf("Please input during time(unit : second) : ");
        scanf("%d", &second);

        sec = second % 60;
        min = (second % 3600) / 60;
        hour = second / 3600;
        printf("Hour : %d\n", hour);
        printf("Minute : %d\n", min);
        printf("Second : %d\n", sec);

        return 0;
}
