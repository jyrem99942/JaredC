#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int a = get_int("Height of staircase?: "); a > 0; a--)
    {
        printf ("\n");
        for (int b = a; b > 0; b--)
        printf ("# ");
    }
printf ("\n\n");
}
