/* 05LO8.c: Using Precision Specifier */
#include <stdio.h>
main(){

  int int_num = 12;
  double flt_num = 123.456789;

  printf("Default integer format:   %d\n",  int_num);
  printf("With precision specifier: %2.8d\n", int_num);
  printf("Default float format:   %f\n",  flt_num);
  printf("With precision specifier: %-10.3f\n", flt_num);
  return 0;
}