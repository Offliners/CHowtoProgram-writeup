#include<stdio.h>                                                                                                                                                                                           

void printA(void);
void printB(void);
void printC(void);
void printD(void);

int main(void)
{
        printf("====== A ======\n");
        printA();

        printf("====== B ======\n");
        printB();

        printf("====== C ======\n");
        printC();

        printf("====== D ======\n");
        printD();

        return 0;
}

void printA()
{
        for(int i = 1; i <= 10; i++)
        {
                for(int j = 0; j < i;j++)
                        printf("*");
                printf("\n");
        }
}

void printB()
{
        for(int i = 10; i > 0; i--)
        {
                for(int j = 0; j < i;j++)
                        printf("*");
                printf("\n");
        }

}

void printC()
{
        for(int i = 0; i < 10; i++)
        {
                for(int j = 0; j < 10; j++)
                {
                        if(i >= j)
                                printf("*");
                        else
                                printf(" ");
                }
                printf("\n");
        }
}

void printD()
{
        for(int i = 0; i < 10; i++)
        {
                for(int j = 0; j < 10; j++)
                {
                        if(i + j >= 9)
                                printf("*");
                        else
                                printf(" ");
                }
                printf("\n");
        }

}   
