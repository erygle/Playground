#include<stdio.h>
#include<stdlib.h>

int addNode(int data);
void printNode();
int addNodeHead(int data);
int deleteNode(int data);
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;


int main(int argc, char const *argv[]){
    addNodeHead(5);
    addNode(6);
    addNode(7);
    printNode();
    addNodeHead(8);
    addNodeHead(2);
    printNode();
    deleteNode(2);
    deleteNode(7);
    printNode();
    return 0;
}
int addNode(int data){
    if(head==NULL){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        head = tail = temp;
    }else{
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }

}
int addNodeHead(int data){
    if(head==NULL){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;

        head=tail=temp;
    }else{
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->next = head;

        head = temp;
    }
}
void printNode(){
    if(head == NULL){
        printf("There is no data.\n");
        return;
    }else{
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp = head;
        while(temp!=NULL){    
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }puts("");
}
int deleteNode(int data){
    struct node* prev = NULL;
    struct node* new = head;
    if(new == NULL){
        printf("there is no data.\n");
        return 1;
    }
    if(head->data == data){
        struct node* temp = head;
        new = new->next;
        head = new;
        free(temp);
        return 1;
    }
    if(tail->data == data){
        prev = tail;
    }
    while(new->data != data && new != NULL){
        prev = new;
        new = new->next;
    }prev->next = new->next;
    free(new);
}
