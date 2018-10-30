// Verify that the expression getchar() != EOF is 0 or 1. 

#include <stdio.h>


int main(int argc, char *argv[])
{
  printf("%d", getchar() != EOF);

  return 0;
}

