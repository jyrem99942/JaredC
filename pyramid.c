#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\n\n");

    // set top length
    int toplength = get_int("Top length? ");
    printf("\n\n");

    //get block character
    char blocktype = get_char("Block type? ");
    printf("\n\n");

    // set pyramid height
    for (int height = get_int("Height of pyramid? "); height > 0; height--)

    // print spaces/blocks
    {
        printf("                               ");
        for (int d = height; d > 1; d--)
        {
            printf("  ");
        }
        for (int c = 0; c < toplength; c++)
        {
            printf(" %c", blocktype);
        }
        printf("\n");
        toplength+=2;
    }
    printf("\n\n");
}
