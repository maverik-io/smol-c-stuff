#include <complex.h>
#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  float d, o1, o2;
  int is_real = 0;

  // display starting shit
  printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");
  printf("Ax^2 + Bx + C\nEnter A, B and C [A B C]: ");
  scanf("%i %i %i", &a, &b, &c);
  printf("\n+SOLVING FOR+=+=+=+=+=+=+=+=+=+=+=+\n");
  printf("%ix^2 + %ix + %i", a, b, c);
  printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");
  // determine d
  d = (b * b - 4 * a * c);
  if (d >= 0) {
    printf("> Real Roots");
    is_real = 1;
  } else {
    printf("> Complex Roots");
  }
  printf(" (d = %.2f)", d);
  // find the Roots
  printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");
  printf("Roots =>");
  if (is_real == 1) {
    o1 = (b + sqrt(d)) / (2 * a);
    o2 = (b - sqrt(d)) / (2 * a);
    printf("\nR1 = % .2f\nR2 = % .2f", o1, o2);
  } else {
    o1 = (b + csqrt(d)) / (2 * a);
    o2 = (b - csqrt(d)) / (2 * a);
    printf("\n  R1 = %.2f + %.2fi\n  R2 = %.2f + %.2fi", creal(o1), cimag(o1),
           creal(o2), cimag(o2));
  }
  printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");

  return 0;
}
