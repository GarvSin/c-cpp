#include<stdio.h>


struct Node{
   int data;
   struct Node *next;
};
void printList(struct Node* n)
{
    while(n!=NULL){
        printf("%d \n",n->data);
        n=n->next;
    }
}
int main()
{
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;

    second=(struct Node*)malloc(sizeof(struct Node));
    head->next=second;
    second->data=2;

    third=(struct Node*)malloc(sizeof(struct Node));
    second->next=third;
    third->data=3;
    third->next=NULL;

    printList(head);

    return 0;
}
