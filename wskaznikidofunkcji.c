#include <stdio.h>

void function1(){
    printf(" This is function 1 \n");
}


void function2(){
    printf(" This is function 2 \n");
}

int main(){
    void ( *function_pointers[2])();

    function_pointers[0] = function1;
    function_pointers[1] = function2;

    function_pointers[0]();
    function_pointers[1]();
    return 0;
}