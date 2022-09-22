#include <stdio.h>

int main(){
    printf("Hello, Mom\n");
    printf("Good morning! :)\n");

    //comment here

    /*
        LITERALS, DATA TYPES
        All these fixed data (values) that we can use directly in our program
        int             => 23       format specifier %d/%i
        double / float  => 23.56    %lf     => .2lf/.3lf
        char            => 'C'      %c

        VARIABLES
        Create/print/change variable values
        Common mistakes -:
            Spelling
            forgetting semicolon
            case-sensitive
            forgetting commas in printf()
            quotation marks error
    */
    //int age;
    //age = 24;
    // int age = 24;
    double number = 34.56;
    double salary = 245379.89;

    char letter = 'C';

    //int distance = 329;

    //int newDistance = 430;

    //distance = newDistance;

    int age = 28, distance = 566, newDistance = 678;

    printf("Hello son, you are %d years old.\n", age);
    printf("Our discount today is: Kshs. %.2lf \n", number);
    printf("Favorite alphabetical letter is - %c \n", letter);
    printf("Distance now is: %d kms \n", distance);
    printf("Hello Mark, when %d years old,  you will earn %.2lf salary p.m \n", age + 2, salary);

    /*
        OPERATORS =>
        =
        +
        -
        /
        *
        %
        ++ /--
        precedence and associativity
        sizeof()    => %zu format specifier
    */
    int first = 23, second = 4;
    int sum = first + second;
    printf("The total of %d and %d is:- %d \n", first, second, sum);
    printf("The sum is: %d \n", first + second);

    int penNumber = 14;
    int studentNumber = 3;
    int penPerStd = penNumber / studentNumber;
    int remPen = penNumber % studentNumber;
    printf("Pens for each student %d, and pens remaining after sharing is: %d \n", penPerStd, remPen);

    printf("The size of int: %zu \n", sizeof(first));

    /*
        TYPE CONVERSION
            Explicit
            Implicit
    */
    double cool_number = 18.7;
    int result;
    result = (int) cool_number; //explicitly converted double to int
    printf("Explicitly converted to: %d \n", result);

    /*
        USER INPUT
            scanf() => %d = format specifier    &likes = memory address
    */
    int likes;
    char favAlphabet;
    double points;

    //printf("How many likes today?\n");
    //scanf("%d", &likes);

    //printf("What is your favorite letter?\n");
    //scanf("%c", &favAlphabet);

    //printf("How many points did you collect?\n");
    //scanf("%lf", &points);

    //printf("I got %d likes right now, with %.2lf point, which equals %c.\n", likes, points, favAlphabet);

    int last_salary, bonus;

    printf("Enter last month salary: \n");
    scanf("%d", &last_salary);

    printf("Enter extra bonus:\n");
    scanf("%d", &bonus);

    printf("I got %d last month and an extra %d, summing to %d: ", last_salary, bonus, (last_salary + bonus));

}
