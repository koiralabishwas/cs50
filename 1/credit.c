#include <stdio.h>
#include <cs50.h>

//TODO:
// promt user for input 
// calculate the checksum => is valid or not
// check for card length and starting digits
// print AMEX , MASTERCARD or INVALID
void validate(long long number);

int main (void) {
  long long cardNum ;
  do {
    cardNum = get_double("NUMBER: ");
  } while (cardNum < 0); 
  validate(cardNum);

  
}

void validate(long long number) {

  for (long long i = 10 ; i <= number ; i = i * 10) {
    long long digit = number % 10;
    number = number / 10;
    printf("%lld\n", digit);
  }
  
  // printf("INVALID\n");
}

// int determineBrand(long number) {
//   // amex => 15 digits , start : 34, 37
//   // mastercard => 16 digits , start : 51,52,53,54,55
//   // visa => 13 or 16 digits , start : 4
//   if (number)
// }
