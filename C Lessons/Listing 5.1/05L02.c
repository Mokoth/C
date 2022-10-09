/* 05L02.c: Reading input by calling getchar() */
#include <stdio.h>

main(){
  int ch1, ch2;

  printf("Please type in two characters together:\n");
  ch1 = getc( stdin );
  ch2 = getchar( ); /* getchar => getc( stdin )*/
  printf("The first character you just entered is: %c\n", ch1);
  printf("The second character you just entered is: %c\n", ch2);
  return 0;
}