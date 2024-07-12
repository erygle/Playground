#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;           //data
    struct node *next;  //address
}*head;

void createList(int n);
void traverseList();

int main(int argc, char const *argv[]){
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d",&n);

    createList(n);

    printf("\nData in the list\n");
    traverseList();


return 0;
}

void createList(int n){
    struct node *newnode, *temp;
    int data,i;

    head = (struct node*)malloc(sizeof(struct node));

    if(head == NULL){
        printf("Unable to allocate memory.");
        exit(0);
    }

    printf("Enter the data of node 1: ");
    scanf("%d",&data);

    head->data = data;
    head->next = NULL;

    temp = head;
    for(i=2 ; i<=n ; i++){
        newnode = (struct node*)malloc(sizeof(struct node));

        if(newnode == NULL){
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ",i);
        scanf("%d",&data);

        newnode->data = data;
        newnode->next = NULL;

        temp->next = newnode;
        temp = temp->next;
    }
}

void traverseList(){
    struct node *temp;

    if(head == NULL){
        printf("List is empty.");
        return ;
    }

    temp = head;
    while(temp != NULL){
        printf("Data = %d\n",temp->data);
        temp = temp->next;
    }
}
