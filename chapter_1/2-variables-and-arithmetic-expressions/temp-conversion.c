// compile with: cc temp-conversion.c
//

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main()
{
  // variable declarations
  //
  float fahr, celsius;
  int lower, upper, step;

  // assignment statements
  //
  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */
  fahr = lower;

  // print heading above the table
  //
  printf("  F      C\n----------\n");
  
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);

    // printf is not part of the C language; there is no input or output defined
    // in C itself. printf is just a useful fuction from the standard library of
    // functions that are normally accessible to C programs.
    //
    // %3.0f says that a floating-point number is to be printed at least three
    // characters wide, with no decimal point and no fraction digits.
    //
    // %o for octal, %x for hexadecimal, %c for character, %s for character
    // string, and %% for % itself
    //
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
