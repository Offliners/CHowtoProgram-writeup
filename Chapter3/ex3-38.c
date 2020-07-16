#include<stdio.h>                                                                                                                                                                                           
#include<string.h>

int main(void)
{
        char num[5];

        printf("Please input an integer (under 5 digits) : ");
        scanf("%s", num);

        int numLen = strlen(num);
        int count9 = 0;

        for(int i = 0; i < numLen; i++)
                if(num[i] == '9')
                        count9++;

        printf("The amount of 9 is %d\n", count9);

        return 0;
}
