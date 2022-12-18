#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  const double c = 299792458.0;

  double m;

  double E;

  printf("Enter mass (kg): ");
  scanf("%lf", &m);

  E = m * pow(c, 2);

  printf("Energy (Joules): %lf\n", E);
  system("pause");

  return 0;
}
