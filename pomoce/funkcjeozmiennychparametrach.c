#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...){
    int result = 0;

    va_list list;
    va_start(list, count);

    printf("Sum %d elements: \n", count);
    for (int i = 0; i < count; i++){
        int num = va_arg(list, int);
        printf("Num = %d \n", num);

        result += num;
    }
    va_end(list);

    return result;
}

int main(){
    printf("Result: %d \n", sum(3, 1, 2, 3));
    printf("Result: %d \n", sum(5, 10, 20, 30 ,40, 50));
    
    return 0;
}