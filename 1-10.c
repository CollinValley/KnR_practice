#include <stdio.h>

// Write a program to copy its input to its output, replacing tab by \t, backspace by \b
// and each backslash by \\, this makes tavsa and backspaces visible in an unambigous way
int main() {
  int c;

  while((c = getchar()) != EOF) {
    if ( c == '\t') {
      printf("\\t");
    } else if ( c == '\b'){
      printf("\\b");
    } else if ( c == '\\') {
      printf("\\");
    } else
      putchar(c);
  }
}
