#include <stdio.h>
#include <cs50.h>
// 風痛にまずはそれぞれ個数を pring
// その後に、形の逆をprint
// 間を開けて両方print
int main(void)
{
  int height;
  do
  {
    height = get_int("Height : ");
  } while (height < 1);

  for (int i = 0; i < height; i++)
  {

    for (int spaces = height - i - 1; spaces > 0; spaces--)
    {
      printf(" ");
    }

    for (int bricks = 0; bricks <= i; bricks++)
    {
      printf("#");
    }

    printf("  ");

    for (int bircks = 0; bircks <= i; bircks++)
    {
      printf("#");
    }

    printf("\n");
  }
}
