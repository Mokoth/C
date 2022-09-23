#include <stdio.h>

void greet(int num){
    printf("Hello, Mom! %d\n", num);
}

// function for a square
void square(int num){
    int squared = num * num;
    printf("The square of %d is %d \n" , num, squared);

}


// function to print string of characters
void fortune_cookie(char msg[]){  // msg is just a pointer
    printf("Message reads: %s \n", msg); // msg points to the message
    printf("Message occupies %i bytes \n", sizeof(msg)); // size of msg
}

int main(){

    greet(123);

    square(122);

    char message[] = "Cookies makes you fat!";
    fortune_cookie(message);

    int name = 233;
    char named[] = "Noble Ed";
    //printf("Size of name is: %d \n", sizeof(name));

    printf("String stored at address: %p \n", named);
}


