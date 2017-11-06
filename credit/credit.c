#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Number: ");
    long long cardNum = get_long_long();
    long long prevNum = cardNum;

    int numArray = [];
    int count = 0;
    while (cardNum < 10) {

        cardNum = prevNum / 10;
        numArray[count] = cardNum % 10;
        prevNum = cardNum;

    }

    printf("%lli\n", cardNum);



}