#include <stdio.h>
#include <cs50.h>

// Print brick height
// print brick rows

void print_row(int bricks);

int main(void)
{
    int h;
    do
    {
        h = get_int("What is the height?");
    }
    while (h < 1);
    {
        for (int y = 0; y < h; y++ )
        {
            int r = y;
            print_row(r + 1);
        }
    }
}

void print_row(int bricks)
{
    for (int r = 0; r < bricks; r++)
    {
        printf("#");
    }
    printf("\n");
}