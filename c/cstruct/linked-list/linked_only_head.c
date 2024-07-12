#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head = NULL;

int addNode(int data);
void printNode();

int main(int argc, char const *argv[])
{
    addNode(2);
    addNode(3);
    addNode(4);
    printNode();
    return 0;
}
int addNode(int data){
    if(head==NULL){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        head=temp;
    }
    else{
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->next = temp;
        
    }
}
void printNode(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}