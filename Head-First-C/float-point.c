#include <stdio.h>

int main(){
  int int_num1, int_num2, int_num3;   /*  Declaring integer variables*/
  float flt_num1, flt_num2, flt_num3; /*  Declaring floating point variables*/

  int_num1 = 32 / 10; /*  Both divisor and dividend are integers */
  flt_num1 = 32 / 10;
  int_num2 = 32.0 / 10; /*  The divisor is an integer */
  flt_num2 = 32.0 / 10;
  int_num3 = 32 / 10.0; /* The dividend is an integer */
  flt_num3 = 32 / 10.0;

  printf("The integer division. of 32/10 is: %d \n", int_num1);
  printf("The floating point division. of 32/10 is: %f \n", flt_num1);
  printf("The integer division. of 32.0/10 is: %d \n", int_num2);
  printf("The floating point division. of 32.0/10 is: %f \n", flt_num2);
  printf("The integer division. of 32/10.0 is: %d \n", int_num3);
  printf("The floating point division. of 32/10.0 is: %f \n", flt_num3);

  /*1. Are the integer divisions of 134/100 and 17/10 equal?*/
  int div1, div2, equal_int;
  div1 = 134 /100;
  div2 = 17 / 10;
  equal_int = div1 == div2;
  printf("%d",equal_int);

  /*
    How can you represent the following numbers in scientific notation?
    * 23490000
    * 3500
    * 0.0035
    * -0.0035
  */
  int three_five, zero_point, negative_point, full_rotation;
  full_rotation = 23490000;
  three_five = 3500;
  printf("%e %e", full_rotation, three_five);

  return 0;

}
