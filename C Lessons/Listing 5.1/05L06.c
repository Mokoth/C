/* 05LO6.c: Specifying minimum field width */
#include <stdio.h>

main(){

  int num1, num2;

  num1 = 12;
  num2 = 12345;
  printf("%d", num1);
  printf("%d", num2);
  printf("%5d", num1);
  printf("%05d", num1);
  printf("%3d", num2);
  return 0;
}