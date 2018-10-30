// Write a program to print a histogram of the lengths of words in its
// input. It is easy to draw the histogram with the bars horizontal; 
// a vertical orientation is more challenging. 

#include <stdio.h>

#define INWORD 1
#define INSPACE 0

#define ARRAY_LEN 20
#define MAX_FREQ 30 //defined to facilitate vertical histograms

int main(void)
{
  int ch;
  int state = INSPACE;
  int current_world_len = 0;
  
  int word_len_frequency[ARRAY_LEN];

  for (int i = 0; i < ARRAY_LEN; ++i) {
    word_len_frequency[i] = 0;
  }

  while ((ch = getchar()) != EOF) {
    if (ch == '\t' || ch == '\n'|| ch == ' ') {
      if (state == INWORD) {
        word_len_frequency[current_world_len-1]++;
        current_world_len = 0;
      }
      state = INSPACE;
    } else {
      state = INWORD;
      current_world_len++;
    }
  }
  // Print frequency
  for (int i = 0; i < ARRAY_LEN; ++i) {
    printf("%d\t%d\n", i+1, word_len_frequency[i]);
  }
 
  // Print Horiontal Histogram
  for (int i = 0; i < ARRAY_LEN; ++i) {
    printf("%d ", i+1);
    for (int j = 0; j < word_len_frequency[i]; ++j) {
      putchar('|');
    }
    printf("\n");
  }
  
  // Print vertical Histogram
  for (int i = 0; i < MAX_FREQ; ++i) {
    for (int j = 0; j < ARRAY_LEN; ++j) {
      if ((i + word_len_frequency[j]) >= MAX_FREQ) {
        putchar('_');
        putchar(' ');
      } else {
        putchar(' ');
        putchar(' ');
      }
    }
    printf("\n");
  }
 
  for (int i = 0; i < ARRAY_LEN; ++i) {
    printf("%d ", i+1);
  }
 
  return 0;
}
