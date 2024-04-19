#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

int main(){
    struct Person person_list[2];

    strcpy(person_list[0].name, "Mike");
    person_list[0].age = 30;

    
    strcpy(person_list[1].name, "Susan");
    person_list[1].age = 25;

    printf("Person list \n\n");

    for(int i = 0; i < 2; i++){
        printf("Person ID: %d\n", i+1);
        printf("Name: %s\n",person_list[i].name);
        printf("Age: %d\n", person_list[i].age);
        printf("\n");
    }

    return 0;
}