#include <stdio.h>

void introduction(){
    printf("Hi! \n");
    printf("How are you doing? \n");
    printf("Bye for now");
}
int main(){
    introduction();


    char my_string [] = "Hello, Mom, I hope you're doing well!";

    //printf("%s", my_string);

    //Access and Modify string
    my_string [0] = 'J';
    printf("%s", my_string);
}
