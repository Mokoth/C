#include <stdio.h>
#include <stdbool.h>

int main(){
    bool loggedIn = false;
    bool isRaining = true;
/*
    // check if a number is Positive or not
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("%d \n", num > 0);

    // check if a number is odd or even
    int digit;
    printf("Enter digit to test: \n");
    scanf("%d", &digit);

    printf("Even: %d", (digit % 2 == 0)); //Even
    printf("Odd: %d", (digit % 2 != 0)); //Odd

*/
    // if
    // passing grade
    int grade;
    printf("Enter student grade: ");
    scanf("%d", &grade);

    if(grade >= 50){
        printf("Congratulations! Passed with %d marks.", grade);
    }else{
        printf("Failed! Try again.");
    }

    // can vote
    int age;
    printf("\n Enter your age: ");
    scanf("%d", &age);

    if(age > 18){
        printf("Viable to vote\n");
    }else{
        printf("Wait for some years!\n");
    }

/*
    for(int j = 1; j < 5; j++){
        printf("%d", j);
    }
*/
    //return 0;

/*
    // leap year
    int year = 2000;
    //if year divisible by 4 and not by 100 or divisible by 400
    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a leap year", year);
    }else{
        printf("Not a leap year");
    }
*/
    int constant = 9;
    for(int num = 1; num < 10; num++){
        int product = constant * num;
        printf("%d*%d = %d\n", constant, num, product);
    }

    return 0;
}
