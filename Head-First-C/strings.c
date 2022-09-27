#include <stdio.h>

int main(){
    char my_string [] = "Hello, Mom, I hope you're doing well!";

    //printf("%s", my_string);

    //Access and Modify string
    printf("%s \n", my_string [4]);
    my_string [0] = 'J';
    printf("%s", my_string);
}
