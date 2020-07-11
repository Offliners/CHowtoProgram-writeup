#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        int num;

        printf("Please input a 5-digit number : ");
        scanf("%d", &num);

        printf("%d\t", num / 10000);
        num = num - ((num/10000)*10000);
        printf("%d\t", num / 1000);
        num = num - ((num/1000)*1000);
        printf("%d\t", num / 100);
        num = num - ((num/100)*100);
        printf("%d\t", num / 10);
        num = num - ((num/10)*10);
        printf("%d\t", num);
        printf("\n");

        return 0;
}
