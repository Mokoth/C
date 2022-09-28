#include <stdio.h>

int main(){
    int a;
    double b;
    char j;
    float t;

    printf("Size of int = %lu bytes \n", sizeof(a));
    printf("Size of double = %lu bytes \n", sizeof(b));
    printf("Size of char = %lu bytes \n", sizeof(j));
    printf("Size of float = %lu bytes \n", sizeof(t));
    return 0;
}