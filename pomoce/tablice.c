#include <stdio.h>

int main(){
    char board[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            board[i][j] = '-';
        } 
    }
    board[0][0] = 's';
    board[2][2] = 's';
    board[4][4] = 's';
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c",board[i][j]);
        } 
        printf("\n");
    }
    return 0;
}