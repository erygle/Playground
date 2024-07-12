#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *head;
void createList(int n);
void printList();

int main(int argc, char const *argv[]){
    int n;

    printf("How many nodes do you want to enter : ");
    scanf("%d",&n);
    createList(n);
    printList();

    return 0;
}

void createList(int n){
    node *temp,*data;
    int dt,i;
    //node *head;
    head = (node*)malloc(sizeof(node));

    dt = rand();

    head->data = dt;
    head->next = NULL;

    temp = head;
    for(i=1; i<n; i++){
        data = (node*)malloc(sizeof(node));
        dt = rand();
        data->data = dt;
        data->next = NULL;

        temp->next = data;
        temp = temp->next;
    }
}

void printList(){
    node *temp;
    temp=head;

    while(temp != NULL){
        printf("%d   ",temp->data);
        temp = temp->next;
    }
}