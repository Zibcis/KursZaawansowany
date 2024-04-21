#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n = 3;

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Memory error! \n");
        return 1;
    }
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    for(int i = 0; i < 3; i++){
        printf("%d \n", ptr[i]);
    }

    free(ptr);
    return 0 ;

}