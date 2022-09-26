#include <stdio.h>
int main(){
    //working with pointers
    int num = 234;
    int* ptr = &num;

    printf("%d \n", num);
    printf("%p \n", &num);
    printf("%d", *ptr);

}
