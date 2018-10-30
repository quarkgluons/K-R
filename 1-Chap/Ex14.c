// Write a program to print a histogram of the frequencies of different characters in its input.

#include <stdio.h>

#define NUM_CHARS 128
#define MAX_FREQ  30

int main(void)
{
  int char_freq[NUM_CHARS];

  for (int i = 0; i < NUM_CHARS; i++) {
    char_freq[i] = 0;
  } 
  
  int ch;
  while ((ch = getchar()) != EOF) {
    char_freq[ch]++;
  }

  for (int i = 0; i < NUM_CHARS; ++i) {
    printf("%c\t%d\n", i, char_freq[i]);    
  }
  
  // Print vertical Histogram
  for (int i = 0; i < MAX_FREQ; ++i) {
    for (int j = 0; j < NUM_CHARS; ++j) {
      if ((i + char_freq[j]) >= MAX_FREQ) {
        putchar('-');
        putchar(' ');
      } else {
        putchar(' ');
        putchar(' ');
      }
    }
    printf("\n");
  }
 
  for (int i = 0; i < NUM_CHARS; ++i) {
    printf("%c ", i);
  }
 

  return 0;
}
