//    Rewrite the temperature conversion program of Section 1.2 to use a 
//    function for conversion. 

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrenheit_celcius_convertor(float fahr)
{
  return 5 * (fahr-32) / 9;
}

int main ()
{
  float fahr = 0;
  while (fahr <= UPPER) {
    printf("%3.0f\t%6.1f\n", fahr, fahrenheit_celcius_convertor(fahr));

    fahr+=STEP;
  }

  return 0;
}
