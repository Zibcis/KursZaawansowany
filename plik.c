#include <stdio.h>
#include <string.h>


int write_file(char* path, char character);
int read_file(char* path);

int main(){
    char character = 'c';
    char path[] = "file.txt";
    write_file(path, character);
    read_file(path);
    return 0;
}

int write_file(char* path, char character){
    FILE *file = fopen(path, "w");
    
    if(file == NULL){
        printf("Cannot open file \n");
        return 1;
    }

    fputc(character, file);

    fclose(file);
    return 0;
}

int read_file(char* path){
    FILE *file = fopen(path, "r");

    if(file == NULL){
        printf("Cannot open file \n");
        return 1;
    }

    char character =fgetc(file);

    printf("Read character: %c \n");

    fclose(file);
    return 0;
}