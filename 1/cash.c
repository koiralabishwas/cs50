#include <stdio.h>
#include <cs50.h>
int main(void)
{
  int number;
  do
  {
    number = get_int("NUMBER: ");
  } while (number < 0);

  int counter = 0;

  // calculate 25 cents
  while (number >= 25)
  {
      counter++;
      number = number - 25;
  }

    // calculate 10 cents
  while (number >= 10)
  {
      counter++;
      number = number - 10;
  }

    // calculate 5 cents
  while (number >= 5)
  {
      counter++;
      number = number - 5;
  }

    // calculate 1 cents
  counter = counter + number;
  
  printf("%d\n",counter);
}
