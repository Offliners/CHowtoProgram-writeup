  1 #include<stdio.h>                                                                                                                                                                                       
  2 
  3 int sum(int, int);
  4 int diff(int, int);
  5 int multiply(int, int);
  6 double division(int, int);
  7 
  8 int main(void)
  9 {
 10         int num1, num2;
 11 
 12         printf("Please input two integers (space split) : ");
 13         scanf("%d %d", &num1, &num2);
 14 
 15         printf("Sum : %d\n", sum(num1, num2));
 16         printf("Difference : %d\n", diff(num1, num2));
 17         printf("Multiply : %d\n", multiply(num1, num2));
 18         printf("Division : %lf\n", division(num1, num2));
 19 
 20         return 0;
 21 }
 22 
 23 int sum(int a, int b)
 24 {
 25         return a + b;
 26 }
 27 
 28 int diff(int a, int b)
 29 {
 30         return a - b;
 31 }
 32 
 33 int multiply(int a, int b)
 34 {
 35         return a * b;
 36 }
 37 
 38 double division(int a, int b)
 39 {
 40         return (double) a / b;
 41 }
