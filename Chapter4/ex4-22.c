#include<stdio.h>                                                                                                                                                                                           

// Linux EOF : Ctrl + d

int main(void)
{
        int count = 0;
        int total = 0;
        char grade, avg;

        while((grade = getchar()) != EOF)
        {
                switch(grade)
                {
                        case 'A':
                        case 'a':
                                count++;
                                total += 5;
                                break;
                        case 'B':
                        case 'b':
                                count++;
                                total += 4;
                                break;
                        case 'C':
                        case 'c':
                                count++;
                                total += 3;
                                break;
                        case 'D':
                        case 'd':
                                count++;
                                total += 2;
                                break;
                        case 'E':
                        case 'e':
                                count++;
                                total += 1;
                                break;
                        case '\n':
                        case '\t':
                        case ' ':
                                break;
                        default:
                                printf("Error input!\n");
                                break;
                }
        }

        switch(total / count)
        {
                case 1:
                        avg = 'E';
                        break;
                case 2:
                        avg = 'D';
                        break;
                case 3:
                        avg = 'C';
                        break;
                case 4:
                        avg = 'B';
                        break;
                case 5:
                        avg = 'A';
                        break;
                default:
                        printf("Error\n");
                        break;
        }

        printf("The average grade for the class is %c\n", avg);

        return 0;
}       
