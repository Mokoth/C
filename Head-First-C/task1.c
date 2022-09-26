#include <stdio.h>
#include <stdbool.h>
int main(){
/*    // program to convert F to C
    // FORMULA => C = (5/9)(F-32)
    // 0 -17
    // 20 -6
    // lower limit, upper limit, step

    //To-do - implement using scanf

    int fahn, to_celsius;
    int lower_limit, upper_limit, step;

    lower_limit = 0;
    upper_limit = 300;
    step = 20;

    fahn = lower_limit;
    while(fahn <= upper_limit){
        to_celsius = 5 * (fahn - 32) / 9;
        printf("%d \t %d \n", fahn, to_celsius);
        fahn = fahn + step;
    }

    int i, j, n;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= 4; j++){
            //printf("*");
            if(){
                printf("");
            }else{
                printf("");
            }
        }
    }

}
*/
//Running sum
/*
    int sum, num;
    sum = 0;
    while(true){
        printf("Enter a number: \n");
        scanf("%d", &num);
        if(num < 0){
            break;
        }
        sum = sum + num;
        printf("%d\n", sum);
    }
    printf("%d", sum);
*/

    int num, rem, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num%10;
        sum = sum + rem*rem;
        num = num/10;
    }
    printf("\nSum of Square of Digits = %d", sum);
    return 0;
}

