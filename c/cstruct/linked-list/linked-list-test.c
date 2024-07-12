#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

int addNode(int data);
int addNodeHead(int data);
void printNode();
int deleteNode(int data);

struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
int main(int argc, char const *argv[]){
    addNode(1);
    addNode(2);
    addNodeHead(4);
    addNode(3);
    printNode();
    deleteNode(3);
    printNode();
    return 0;
}

int addNode(int data){
    if(head == NULL){
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }else{
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        tail->next = new;
        tail = new;
    }
}

int addNodeHead(int data){
    if(head == NULL){
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }else{
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        new->next = head;
        head = new;
    }
}
void printNode(){
    struct node* new = head;
    while(new != NULL){
        printf("%d ",new->data);
        new = new->next;
    }puts("");
}
int deleteNode(int data){
    struct node* prev = NULL;
    struct node* new = head;
    if(new == NULL){
        printf("This node is empty.\n");
        return 1;
    }
    if(head->data == data){
        struct node* temp = head;
        new = new->next;
        head = new;
        //head = head->next;
        free(temp);
        return 1;
    }
    if(tail->data == data){
        prev = tail;
    }
    while(new->data != data && new != NULL){
        prev = new;
        new = new->next;
    }
    prev->next = new->next;
    free(new);

}