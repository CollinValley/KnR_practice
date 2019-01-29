#include <stdio.h>

// Copy input to output, one character at a time
int main() {
  int c;
  // modified to show c is always either 0 or 1
  //TEST
  while(c = (getchar() != EOF)) {
    printf("C: %d\n", c);
  }
  printf("EOFC: %d\n", c);
}
//HERE
