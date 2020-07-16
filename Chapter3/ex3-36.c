#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

int isArmstrong(int);

int main(void)
{
        int end = 1000;

        for(int i = 0; i < end; i++)
                if(isArmstrong(i))
                        printf("%d\n", i);

        return 0;
}

int isArmstrong(int num)
{
        int rem;
        int total = 0;
        int exp = 0;
        int org = num;

        while(org != 0)
        {
                org /= 10;
                exp++;
        }

        org = num;
        while(org != 0)
        {
                rem = org % 10;
                total += pow(rem, exp);
                org /= 10;
        }

        if(total == num)
                return 1;
        else
                return 0;
}
