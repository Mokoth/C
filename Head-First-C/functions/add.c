#include <stdio.h>

int addition(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}

int main(){
    int val1, val2;
    printf("Enter first number: ");
    scanf("%d", &val1);
    printf("Enter second number: ");
    scanf("%d", &val2);
    int res = addition(val1, val2);
    printf("%d", res);
    return 0;
}