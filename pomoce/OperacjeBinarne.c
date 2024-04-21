#include <stdio.h>

void Zad1(){
  printf("3 & 2 = %u \n", 3 & 2);
  printf("3 | 2 = %u \n", 3 | 2);
  printf("3 ^ 2 = %u \n", 3 ^ 2);
}

int pow2(int exp){
    if(exp > 0) {
        return 2*pow2(exp - 1);
    }
    if(exp == 0){
        return 1;
    }
}

int main() {

    Zad1();
    printf("%d", pow2(2));

 
  return 0;
}