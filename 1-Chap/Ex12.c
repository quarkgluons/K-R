//  Write a program that prints its input one word per line. 
#include <stdio.h>

#define true 1
#define false 0

int main(void)
{
  int ch;
  int is_last_char_blank = true;
  
  while ((ch = getchar()) != EOF) {
   if (ch == '\t' || ch == ' ' || ch == '\n') {
     if (!is_last_char_blank) {
       is_last_char_blank = true;
       putchar('\n');
     }
   } else {
       putchar(ch);
       is_last_char_blank = false;
   }
  }
  return 0;
}
