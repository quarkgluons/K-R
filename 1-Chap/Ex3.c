#include <stdio.h>

//Modify the temperature conversion program to print a heading above the table. 

int main()
{
  int fahr, celcius;
  int upper, lower, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Temperature conversion program\n");
  while (fahr <= upper) {
    celcius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celcius);

    fahr = fahr + step;
  }

  return 0;
}

