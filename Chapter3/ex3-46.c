// data : https://www.worldometers.info/world-population/                                                                                                                                                   
// 2019
// World population : 7713468100
// 2019 growth rate : 1.08 %

#include<stdio.h>

#define wp2019 7713468100
#define gr2019 0.0108

void calPopulation(long long []);

int main(void)
{
        long long calWP[5];

        calPopulation(calWP);

        for(int i = 0; i < 5; i++)
                printf("%d world population : %lld\n", 2020 + i, calWP[i]);

        return 0;
}

void calPopulation(long long calWP[])
{
        double calGR;

        calWP[0] = (long long)(wp2019 * (1 + gr2019));
        calGR = (double)(calWP[0] - wp2019) / wp2019;

        for(int i = 1; i < 5; i++)
        {
                calWP[i] = (long long)(calWP[i - 1] * (1 + calGR));
                calGR = (double)(calWP[i] - calWP[i - 1]) / calWP[i - 1];
        }
}
