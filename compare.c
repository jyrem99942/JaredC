#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int y = get_int("y? = ");
    int z = get_int("z? = ");

    if (y < z)
    {
        printf("y smaller than z\n");
    }
    else if (y > z)
    {
        printf("y larger than z\n");
    }
    else
    {
        printf("y equal to z\n");
    }
}
