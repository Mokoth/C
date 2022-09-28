#include <stdio.h>

int main() {
//   assignment operators += /= -= %= *=
  int timesServerCrashed = 5;
  double losses = 500.95;
  losses *= timesServerCrashed;
  losses /= 2;
  printf("Total Losses: $%.2f\n", losses);
}