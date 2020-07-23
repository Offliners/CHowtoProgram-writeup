#include<stdio.h>                                                                                                                                                                                           

int main(void)
{
        unsigned int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

        puts("Enter the letter grades : ");
        puts("Enter the EOF character to end input.");
        int grade;

        while((grade = getchar()) != EOF)
        {
                if(grade == 'A' || grade == 'a')
                        ++aCount;
                else if(grade == 'B' || grade == 'b')
                        ++bCount;
                else if(grade == 'C' || grade == 'c')
                        ++cCount;
                else if(grade == 'D' || grade == 'd')
                        ++dCount;
                else if(grade == 'F' || grade == 'f')
                        ++fCount;
                else if(grade == '\n' || grade == ' ' || grade == '\t')
                {

                }
                else
                {
                        printf("Incorrect letter grade entered. ");
                        printf("Enter a new grade.\n");
                }
        }

        printf("Totals for each letter grade are :\n");
        printf("A: %d\n", aCount);
        printf("B: %d\n", bCount);
        printf("C: %d\n", cCount);
        printf("D: %d\n", dCount);
        printf("F: %d\n", fCount);

        return 0;
}
