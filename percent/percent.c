#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("float please: ");
    float x = GetFloat();
    printf("float please: ");
    float y = GetFloat();
    printf("%f percent\n", (x/y)*100);
}