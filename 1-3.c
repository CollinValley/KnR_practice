#include <stdio.h>

/* print f to c conversion table */
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr=lower;
  printf("Fahr---Cel\n");
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.0f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
