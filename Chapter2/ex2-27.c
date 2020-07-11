#include <stdio.h>                                                                                                                                                                                          

int main(void)
{
        printf( "====Version1====\n");

        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n\n" );

        printf( "====Version2====\n");

        char* pattern;
        int i;

        for(i = 0; i < 8; i++)
        {
                pattern = (i%2 == 0) ? "* * * * * * * *\n" : " * * * * * * * *\n";
                printf("%s", pattern);
        }

        return 0;
}
