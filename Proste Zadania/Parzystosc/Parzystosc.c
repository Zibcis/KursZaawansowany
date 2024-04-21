#include <stdio.h>

int parzystosc( int Liczba);
int podzielnosc(int Liczba, int Przez);
int ciagFibonacciego(int Numer);

int main(){
    char c = 's';
    printf("%d \n",parzystosc(3));
    printf("%d \n", podzielnosc(3,2));
    printf("%d \n", ciagFibonacciego(5));
    printf("%c \n", c+1);
    return 0;
}

int parzystosc( int Liczba){
    return !(Liczba%2);
}

int podzielnosc(int Liczba, int Przez){
    return !(Liczba%Przez);
}

int ciagFibonacciego(int Numer){
    int suma = 0, p1=1, p2=1;
    if(Numer <= 2){
        return 1;
    }
    else {for(int i=3; i<=Numer; i++){
        suma = p1 + p2;
        p2 = p1;
        p1 = suma;
    }
    return suma;
    }
    
}