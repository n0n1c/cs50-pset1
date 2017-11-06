#include <stdio.h>
#include <cs50.h>


int main(void)
{
    printf("Height: ");
    int height = get_int();
    while (height < 0 || height > 23)
    {
        printf("Height: ");
        height = get_int();
    }
    for (int hcounter = height; hcounter > 0; hcounter--)
    {
        for (int blank = 1; blank < hcounter; blank++)
        {
            printf(" ");
        }
        for (int star = hcounter - 1; star < height; star++)
        {
            printf("#");
        }
        printf("  ");
        for (int star = hcounter - 1; star < height; star++)
        {
            printf("#");
        }
        printf("\n");
    }
}