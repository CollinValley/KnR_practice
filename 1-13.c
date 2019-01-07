#include <stdio.h>
#define MAX_LENGTH 32
#define IN_WORD 1
#define OUT_WORD 0

int main() {
  int current_word_length, c, i,j, state;
  int word_length_count[MAX_LENGTH];

  current_word_length = c = 0;
  for (i = 0; i < MAX_LENGTH; i++) {
    word_length_count[i] = 0;
  }

  state = IN_WORD;
  while ((c = getchar()) != EOF) {
    if (state == IN_WORD) {
      if (c == ' ' || c == '\n' || c == '\t') {
        //Found end of word
        ++word_length_count[current_word_length];
        state = OUT_WORD;
      }
      else {
        // We are in word and got another word character
        if (current_word_length < MAX_LENGTH) {
          ++current_word_length;
        }
      }
    }
    else {
      // We are in OUT_WORD state
      if (c != ' ' && c != '\n' && c != '\t') {
        //Found start of new word
        current_word_length = 1;
        state = IN_WORD;
      }
    }
  }


  //Print histogram
  printf("HISTOGRAM OF WORD COUNT\n");
  for (i = 1; i < MAX_LENGTH; i++) {
    printf("%3d", i);
    for (j = 0; j < word_length_count[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

}
