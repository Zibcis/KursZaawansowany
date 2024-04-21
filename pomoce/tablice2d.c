#include <stdio.h>

int main(){
    int array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (* pointer)[3] = array;

    printf("Array elements: \n");

    printf("%d \n", *(*(pointer + 0) + 0)); //array[0][0]
    printf("%d \n", *(*(pointer + 1) + 1)); //array[1][1]
    printf("%d \n", *(*(pointer + 1) + 2)); //array[2][2]
    return 0;
}