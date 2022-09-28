#include <stdio.h>

/*
Mudulo
A common use of modulo is determining if an integer is even or odd. If we have an integer, x, and aren’t sure if it’s even or odd, we can use modulo to see the remainder. If the result is 1, x is odd, otherwise it is even.
*/

int main() {
  
  int endingDayOfWeek = 0;
  int daysThatPass = 58;
  int daysInWeek = 7;
  endingDayOfWeek = daysThatPass % daysInWeek;
  
  /*
  The day of the week would be:
  (starting day + days that pass) % days in a week
  */

  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %dth day of the week\n", daysThatPass, endingDayOfWeek);
}