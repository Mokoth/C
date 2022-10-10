#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "The girl from Iwo June",
    "From here to maternity",
    "Dancing with the stars",
    "The say its what you make",
    "The cold - marathon runner",
    "The beautiful crows"
};

void find_track(char search_for[]){
    int i;
    for(i = 0; i < 5; i++){
        if(strstr(tracks[i], search_for))
            printf("Track %i: %s \n", i, tracks[i]);
    }
}

void introduction(){
    printf("Hi! \n");
    printf("How are you doing? \n");
    printf("Bye for now");
}
int main(){
<<<<<<< HEAD
    char search_for[80];
    printf("Search for: ");
    scanf(search_for, 80, stdin);
    find_track(search_for);
    return 0;


/*
=======
    introduction();


>>>>>>> fd7aca239c9dd09807016f341f8c85355c47de98
    char my_string [] = "Hello, Mom, I hope you're doing well!";
    //printf("%s", my_string);
    //Access and Modify string
    char hell = my_string [3];
    printf("%s \n", hell);
    my_string [0] = 'J';
    printf("%s", my_string);
*/
}
