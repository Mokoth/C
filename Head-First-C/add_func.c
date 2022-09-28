#include <stdio.h>

int add_integers(int y, int x){
    int sum;
    sum = y + x;
    return sum;
}

int main(){
    int result = add_integers(23, 24);
    printf("Result of 23 and 24 is: %d", result);

    /*
        Getting user input and calculating the sum
        
        int result, val1, val2;
        printf("Enter value 1: ");
        scanf("%d", &val1);
        printf("Enter value 2: ");
        scanf("%d", &val2);
        result = add_integers(val1, val2);
        printf("%d", result);
    */
    return 0;
}