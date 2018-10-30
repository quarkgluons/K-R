//    Write a program to copy its input to its output, replacing each tab
//    by \t , each backspace by \b , and each backslash by \\ .
//    This makes tabs and backspaces visible in an unambiguous way. 
#include <stdio.h>

int main(void)
{
  int ch;

  while(( ch = getchar()) != EOF) {
    if (ch == '\t') {
      putchar('\\');
      putchar('t');
      // To make backspaces visible type Ctrl-h, keyboard backspace key is
      // intercepted by the native OS
    } else if (ch == '\b') {
      putchar('\\');
      putchar('b');
    } else if (ch == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(ch);
    }
  }

  return 0;
}
