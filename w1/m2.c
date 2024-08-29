#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);

int main(void)
{
   int input = get_int("Height:");
   {
      print_row(input);
   }
}

void print_row(int bricks)
{
   for (int x = bricks; x != 0; x--)
   {

      for (int y = x; y != 0 ; y--)
      {
         printf(" ");
      }

      for (int y = x; y <= bricks; y++)
      {
         printf("#");
      }

         printf("\n");
   }

}
