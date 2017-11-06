#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("How much change is owed?\n");
    float change = get_float();
    while( change < 0)
    {
        printf("How much change is owed?\n");
        change = get_float();
    }
    int change2 = round(change * 100);
    int qcount = 0;
    int dcount = 0;
    int ncount = 0;
    int pcount = 0;
    while (change2 > 24)
    {
        change2 = change2 - 25;
        qcount = qcount +1;
    }
    while (change2 > 9)
    {
        change2 = change2 - 10;
        dcount = dcount + 1;
    }
    while (change2 > 4)
    {
        change2 = change2 - 5;
        ncount = ncount + 1;
    }
    while (change2 > 0)
    {
        change2 = change2 -1;
        pcount = pcount + 1;
    }
    int totalcount = pcount + ncount + dcount + qcount;
    printf("%i\n", totalcount);
}