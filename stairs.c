#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\n\n");
    // set top stair length
    int b = get_int("Top stair length? ");
    printf("\n\n");

    // set staircase height
    for (int a = get_int("Height of staircase? "); a > 0; a--)

    // print blocks until length has been reached
    {
        printf("                               ");
        for (int c = 0; c < b; c++)
        {
            printf("@  ");
        }
        printf("\n");
        b++;
    }
    printf("\n\n");
}

// a = height of staircase
// b = length of top stair (incriments by 1 each step)
// c = prints @'s until respective stair length set by "b" is reached
