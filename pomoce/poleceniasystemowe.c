#include <stdio.h>
#include <stdlib.h>

int main(){
    int result = system("dir");

    if(result != 0){
        printf("Result error. \n");
    }
    else{
        printf("Result ok. \n");
    }
    return 0;
}