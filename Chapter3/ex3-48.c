#include<stdio.h>                                                                                                                                                                                           

int encrypt(int);
int decrypt(int);
int op1(int);
int op2(int, int, int, int);
int op3(int);

int main(void)
{
        int num;

        printf("Please input a number (4-digit) : ");
        scanf("%d", &num);

        num = encrypt(num);
        printf("Encrypt : %d\n", num);

        num = decrypt(num);
        printf("Decrypt : %d\n", num);

        return 0;
}

int encrypt(int n)
{
        int a, b, c, d;
        int result;

        a = op1(n % 10);
        n /= 10;
        b = op1(n % 10);
        n /= 10;
        c = op1(n % 10);
        n /= 10;
        d = op1(n % 10);
        n /= 10;

        result = op2(a, b, c, d);

        return result;
}

int decrypt(int n)
{
        int a, b, c, d;
        int result;

        a = op3(n % 10);
        n /= 10;
        b = op3(n % 10);
        n /= 10;
        c = op3(n % 10);
        n /= 10;
        d = op3(n % 10);
        n /= 10;

        result = op2(a, b, c, d);

        return result;
}

int op1(int n)
{
        return (n + 7) % 10;
}

int op2(int a, int b, int c, int d)
{
        int result = b;

        result += a * 10;
        result += d * 100;
        result += c * 1000;

        return result;
}

int op3(int n)
{
        return (n + 3) % 10;
}
