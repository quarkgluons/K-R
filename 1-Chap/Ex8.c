//Write a program to count blanks, tabs, and newlines

#include <stdio.h>

int main(void)
{
  int c;
  int b = 0, nl = 0, tabs = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      nl++;
    if (c == '\t')
      tabs++;
    if (c == ' ')
      b++;
  } 

  printf("newline = %d\ttabs = %d\tspaces = %d", nl, tabs, b);

  return 0;
}
