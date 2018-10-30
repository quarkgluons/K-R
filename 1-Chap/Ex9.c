// Write a program to copy its input to its output, replacing each string of one
// or more 
// or more blanks by a single blank
#include <stdio.h>

#define false 0
#define true 1

int main(void)
{
  int ch;
  int is_last_char_space = false;

  while ((ch = getchar()) != EOF)  {
    if(ch == ' ' && is_last_char_space) {
      continue;
    }
    if (ch == ' ') {
        is_last_char_space = true;
        putchar(ch);
        continue;
    }
      
    is_last_char_space = false;
    putchar(ch);
  }
  
  return 0;
}
