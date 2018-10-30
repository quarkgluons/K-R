#include <stdio.h>

//  Write a program to print the corresponding Celsius to Fahrenheit table. 

int main()
{
  int fahr, celcius;
  int upper, lower, step;

  lower = 0;
  upper = 300;
  step = 20;

  celcius = lower;

  printf("Temperature conversion program\n");
  while (celcius <= upper) {
    fahr = 9 * (celcius / 5) + 32;
    printf("%d\t%d\n",  celcius, fahr);

    celcius = celcius + step;
  }

  return 0;
}

