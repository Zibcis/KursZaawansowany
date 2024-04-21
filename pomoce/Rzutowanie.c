#include <stdio.h>

int main(){
    int x = 10;
    double y;
    printf("Before: %d \n", x);
    y = (double) x;
    printf("After: %lf \n", y);


    return 0;
}