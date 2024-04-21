#include <stdio.h>

union Data {
    double double_digit;
    int int_digit;
};

int main(){
    union Data my_data;
    /*
    my_data.int_digit = 5453;
    my_data.double_digit = 1122.22;
    */

    my_data.double_digit = 1122.22;
    my_data.int_digit = 5453;
    

    printf("%lf \n", my_data.double_digit);
    printf("%d \n", my_data.int_digit);
    
    return 0;
}