#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

#define SIZE 100
#define EMPTY -1
#define FULL (SIZE -1)


typedef struct list{int data; struct list *next;} list; 
//int is_empty(list *l){return(l == NULL);}


void populate_array_with_rand(int a[],int size);
void print_array(int a[], int size, char *str);
list* create_list(int d);
list* add_to_front(int d, list* h);
list* array_to_list(int d[], int size);
void print_list(list *h,char *title);
int count_while(list *h);
int extract(list *h,int pos_to_swap1,int size);
void retract(list *h, int pos_to_swap1, int d, int size);/*puts number into list in given position*/
void swap_nums(list *head, int pos1, int pos2,int size); /*also invokes retract function*/
int compare_nums(list* head,int pos1, int pos2,int size);/*also invokes extract function*/ 

int main()
{
    int a[SIZE];
    list list_of_int;
    list* head=NULL;
    int i,j;

    populate_array_with_rand(a,SIZE);
    head=array_to_list(a,SIZE);
    print_list(head,"\n\nunsorted random numbers in a list structure\n");

    for(i=0;i<SIZE;i++)
    {
        for(j = i+1;j<SIZE;j++)
        {
            if(compare_nums(head,i,j,SIZE))swap_nums(head,i,j,SIZE);
        }
        
    }
    
    print_list(head,"\n\nthe numbers now sorted\n");
    return 0;
}
int compare_nums(list* h,int pos1, int pos2,int size)
{
    int i=0;
    int n1=0, n2=0;

    while(h != '\0')
    {
        if(i==pos1)
        {
            n1 = h->data;
            
        }
        if(i==pos2)
        {
            n2 =h->data;
        }
        h=h->next;
        i++;
    }
    if(n1>n2)
        return(1);
    else
        return(0);
}
void swap_nums(list *head, int pos1, int pos2,int size)
{
    int swp1 = 0;
    int swp2 = 0;

    swp1 = extract(head,pos1,SIZE);
    //printf("\n%d\t",swp1);
    swp2 = extract(head,pos2,SIZE);
    //printf("\n%d\n",swp2);
    retract(head,pos1,swp2,SIZE);
    retract(head,pos2,swp1,SIZE);
}
void populate_array_with_rand(int a[],int size)
{
    int i=0;
    srand((unsigned) time(NULL));
    for(i=0;i<size;i++)
    {
        a[i]=rand();
    }
}
void print_array(int a[], int size, char *str)
{
    int i;
    printf("%s",str);
    for(i=0;i<size;i++)
    {
        if(i%5 == 0)
            printf("\n");
        printf("%7d",a[i]);

    }
}
int extract(list *h, int pos_to_swap, int size)/*copies a number out of the list at a given position*/
{
    int i =0;
    int store1 = 0;

    while(h != NULL)
    {
        if(i==pos_to_swap)
        {
            store1 = h->data;
            
        }
        h=h->next;
        i++;
    }
    return(store1);

}
void retract(list *h, int pos_to_swap, int store1, int size)/*places a number in the list at a given position*/
{
    int i =0;
    

    while(h != NULL)
    {
        if(i==pos_to_swap)
        {
            h->data=store1;
            
        }
        h=h->next;
        i++;
    }
    

}
list* create_list(int d)
{
    list* head =malloc(sizeof(list)); /*allocates the memory or heap for one list */
    head->data = d;
    head->next = NULL;
    return(head);/*returns head address not the pointer with a star*/
}
list* add_to_front(int d, list* h)/*adds the next element of the list */
{
    list* head=create_list(d);/*creates next part of chain with int d*/
    head->next=h;/*head.next now points to h or last list*/
    return(head);

}
list* array_to_list(int d[], int size)
{
    list* head=create_list(d[0]);
    int i;
    for(i=1;i<size;i++){
        head = add_to_front(d[i], head);        
    }
    return(head);
}
void print_list(list *h,char *title)
{
    int i=0;
    printf("%s\n",title);
    while(h!=NULL){/*important idiom*/
        if(i%5==0)
        {
            printf("\n");
        }
        i++;
        printf("%7d\t",h->data);
        h=h->next;
    }

}
int count_while(list *h)
{
    int c=0;
    while(h!=NULL)
    {
        h=h->next;
        c++;
    }
    return c;
}