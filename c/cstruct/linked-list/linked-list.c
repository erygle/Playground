#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int addNode(int data);
int addNodeHead(int data);
int deleteNode(int data);
void print();

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

int main(int argc, char const *argv[]){
    //srand(time(NULL));
    for(int i=0; i<5; i++){
        addNode(rand()%100);
    }
    /*for(int i=0; i<5; i++){
        addNodeHead(rand()%100);
    }*/
    printf("Before deleting: \n");
    print();
    puts("");
    deleteNode(41);
    deleteNode(67);
    deleteNode(34);
    deleteNode(0);
    deleteNode(69);
    deleteNode(69);
    printf("After deleting: \n");
    print();
    addNode(20);
    return 0;
}

int addNode(int data){
    if(head == NULL){
        struct node *new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }
    else{
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        tail->next = new;
        tail = new;
    }
    return 1;
}
int addNodeHead(int data){
    if(head == NULL){
        struct node *new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }
    else{
        struct node *new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        new->next = head;
        head = new;
    }
}
int deleteNode(int data){
    struct node* prev = NULL;
    struct node* index = head;
    if(index == NULL){
        printf("Linked list is empty.\n");
        return 1;
    }
    if(head->data == data){
        struct node* temp = head;
        head = head->next;
        free(temp);
        return 1;
    }
    while(index != NULL && index->data != data){
        prev = index;
        index = index->next;
    }
    if(index == NULL){
        printf("%d is not found.\n",data);
        return 1;
    }
    prev->next = index->next;

    if(tail->data == data){
        tail = prev;
    }
    free(index);
}
void print(){
    struct node* index = head;
    while(index != NULL){
        printf("%d ", index->data);
        index = index->next;
    }
}