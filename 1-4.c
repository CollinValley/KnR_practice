#include <stdio.h>

/* print f to c conversion table */
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  celsius=lower;
  printf("Cel---Fahr\n");
  while(celsius <= upper) {
    fahr =  celsius * (9.0/5.0) + 32;
    printf("%3.0f %6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
