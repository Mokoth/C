/* 05LO1.c: Reading input by calling getc() */
/* Running c file from cmd: gcc 05LO1.c, which results in an executable a.out file */
/* Alternatively gcc 05L01.c -o hello */

#include <stdio.h>
main(){
  int ch;

  printf("Please type in one character: \n");
  ch = getc( stdin );
  printf("The character you just entered is: %c\n", ch);
  return 0;
}
