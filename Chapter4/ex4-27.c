#include<stdio.h>                                                                                                                                                                                           

int isValid(int, int, int);

int main(void)
{
        for(int i = 1; i<= 500; i++)
                for(int j = 1; j <= 500; j++)
                        for(int k = 1; k <= 500; k++)
                                if(isValid(i, j, k))
                                        printf("%d %d %d can form a right triangle\n", i, j, k);

        return 0;
}

int isValid(int a, int b, int c)
{
        if(a > b)
        {
                if(a > c)
                        return (b * b + c * c == a * a);
                else
                        return (a * a + b * b == c * c);
        }
        else if(b > c)
                return (a * a + c * c == b * b);
        else
                return (a * a + b * b == c * c);
}
