#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) (x*x)

int main(){
    printf("PI = %lf\n", PI);
    printf("PI = %d\n", SQUARE(4));
    return 0;
}