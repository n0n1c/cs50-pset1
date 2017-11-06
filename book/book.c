#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("What's your favorite book? ");
    string s = GetString();
    printf("I love %s!\n", s);
    printf("...Actually %s is kind of meh.\n", s);
}