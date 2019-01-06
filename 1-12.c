#include <stdio.h>
//Write a program that prints its input one word per line
#define IN 1
#define OUT 0
int main() {
  int c;
  int state = IN;
  while (( c = getchar()) != EOF){
    if (c == ' ' || c == '\t'){
      if (state)
        putchar('\n');
      state = OUT;
    } else {
      putchar(c);
      state = IN;
    }
  }
}
