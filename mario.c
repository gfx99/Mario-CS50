#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    do

        //asks for height
    {
        n = get_int("Height: ");
    }

    while (n < 1 || n > 8);

    // for rows
    for (int i = 0; i < n; i++)
    {

        // spaces bricks
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }

        // prints left hand side bricks
        for (int lhs = 0; lhs < i + 1; lhs++)
        {
            printf("#");
        }

        //prints gap
        printf("  ");

        // prints right hand side bricks
        for (int rhs = 0; rhs < i + 1; rhs++)
        {
            printf("#");
        }
        printf("\n");
    }
}