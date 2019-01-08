#include <stdio.h>

#define ASCII_TABLE_SIZE 128
int main() {
    int c, i, j;
    int asciiTable[128];

    for (i = 0; i < ASCII_TABLE_SIZE; i++) {
        asciiTable[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c < 0 || c > 127) {
            //Out of bounds
        } else {
            ++asciiTable[c];
        }
  }


  //Print histogram
  printf("HISTOGRAM OF WORD COUNT\n");
  for (i = 1; i < ASCII_TABLE_SIZE; i++) {
    printf("%3d", i);
    for (j = 0; j < asciiTable[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

}
