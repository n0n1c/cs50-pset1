#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes was your shower: ");
    int showerlength = get_int();
    int totalbottles = (showerlength * 12);
    printf("You used the equivalent of %i bottles of water during your shower.\n", totalbottles);
}