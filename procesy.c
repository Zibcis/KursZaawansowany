#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t pid = fork();

    if(pid <0){

        printf("Erro create process \n");
    }
    else if (pid==0){
        printf("Hello! I am child \n");
    }else{
        printf("Hello! I am parent \n");
    }
    return 0;
}