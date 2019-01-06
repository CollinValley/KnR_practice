#include <stdio.h>

// Write a program to copy its input to its output, replacing each string of one or more blanks
// with a single blank
int main() {
  int c, tmp;
  tmp = 0;

  while((c = getchar()) != EOF) {
    if ( c == ' ') {
      if( tmp != ' ')
        putchar(c);
    } else {
      putchar(c);
    }
    tmp = c;
  }
}
