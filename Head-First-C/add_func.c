#include <stdio.h>

int add_integers(int y, int x){
    int sum;
    sum = y + x;
    return sum;
}

int main(){
    int result = add_integers(23, 24);
    printf("Result of 23 and 24 is: %d", result);
    return 0;
}