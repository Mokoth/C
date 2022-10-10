<<<<<<< HEAD
/* 06L01.c: Using arithmetic assignment operators */
=======
/* 06L01.c: Using arithmetic assignment operators ~~ updates branch */
>>>>>>> origin/updates
#include <stdio.h>

main(){

  int x, y, z;

  x = 3;  /* initialize x */
  y = 5;  /* initialize y */
  z = 10; /* initialize z */

  printf("Given that x = %d, y = %d, and z = %d\n", x,  y,  z);

  x = x + y;
  printf("x = x + y assigns %d to x;\n",  x);

  x = 1;  /*  reset x */
  x += y;
  printf("x += y assigns %d to x;\n", x);

  x = 1;  /* reset x */
  z = z * x + y;
  printf("z = z * x + y assigns %d to z;\n",  z);

  z = 5;  /* reset z */
  z = z * (x + y);
  printf("z = z * (x + y) assigns %d to z;\n",  z);

  z = 3;  /* reset z */
  z *= x + y;
<<<<<<< HEAD
  printf("z *= x + y assigns %d to z;\n", z);
  return 0;
}
=======
  printf("z *= x + y assigns %d to z.\n", z);
  return 0;
}
>>>>>>> origin/updates
