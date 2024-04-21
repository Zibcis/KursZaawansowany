#include <stdio.h>


char przesun(char Litera, int przesuniecie);
char odkoduj(char Litera, int przesuniecie);

int main(){
    FILE *dane;
    int i=0, j=0;
    char tab[50];
    dane= fopen("dane.txt", "r");
    if(dane == NULL) printf("Brak pliku");
    else{
        while(!feof(dane)){
            fscanf(dane,"%c",&tab[i]);
            printf("%c",tab[i]);
            i++;
        }
    } 
        printf("\n");
        while(tab[j]!=NULL){
            printf("%c",przesun(tab[j],1));
            j++;
        }
        j=0;
        printf("\n");
        while(tab[j]!=NULL){
            printf("%c",odkoduj(przesun(tab[j],1),1));
            j++;
        }
    fclose(dane);
    return 0;
}

char przesun(char Litera, int przesuniecie){

    if(Litera > 47 && Litera < 58){
        return 48 + (Litera - 48 + przesuniecie)%10;
    }else if(Litera > 64 && Litera < 91){
        return 65 + (Litera - 65 + przesuniecie)%26;
    }else if(Litera > 96 && Litera < 123){
        return 97 + (Litera - 97 + przesuniecie)%26;
    }
}

char odkoduj(char Litera, int przesuniecie){

    if(Litera > 47 && Litera < 58){
        return 48 + (Litera - 48 + 10 - przesuniecie)%10;
    }else if(Litera > 64 && Litera < 91){
        return 65 + (Litera - 65 + 26 - przesuniecie)%26;
    }else if(Litera > 96 && Litera < 123){
        return 97 + (Litera - 97 + 26 - przesuniecie)%26;
    }
}
