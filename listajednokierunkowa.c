#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int data;
    struct Lista *next;
}List;

void show_list(List *head);
void push_back(List *head, int element);
void pop_back(List**head);

void push_front(List** head, int element);
void pop_front(List** head);

int main(){
    List *l1, *l2;
    l1 = (List *)malloc(sizeof(List));
    l2 = (List *)malloc(sizeof(List));
    l1->data = 1;
    l1->next = l2;
    l2->data = 3;
    l2->next = NULL;

    show_list(l1);
    push_back(l1, 4);
    show_list(l1);
    push_front(&l1, 0);
    show_list(l1);
    pop_back(&l1);
    show_list(l1);
    pop_front(&l1);
    show_list(l1);
    free(l1);
    free(l2);
    return 0;
   
}

void show_list(List *head){
    printf("\n");
    if(head == NULL){
        printf("Lista jest pusta"); 
    }
    else{
        List *current = head;
        do{
            printf("Element: %d\n", current->data);
            current = current->next;
        }while(current!=NULL);
    }
}

void push_back(List *head, int element){

    if(head == NULL){
        head = (List*)malloc(sizeof(List));
        head->data = element;
        head->next = NULL;
    }
    else{
        List *current = head;
        while(current->next!=NULL){
            current = current->next;
        }
        current->next = (List *)malloc(sizeof(List));
        current->next->data = element;
        current->next->next = NULL;
    }
}

void push_front(List** head, int element){
        List *current;
        current = (List *)malloc(sizeof(List));

        current->data = element;
        current->next = (*head);
        *head = current;

}

void pop_back(List** head){
    if((*head)->next == NULL){
        *head = NULL;
    }
    else{
        List *current = *head;
        while(current->next->next!=NULL){
            current = current->next;
        }
        free(current->next);
        current->next =NULL;
    }

}

void pop_front(List** head){
    List *current = NULL;

    if(*head!=NULL){
        current=(*head)->next;
        free(*head);
        *head = current;
    }
}