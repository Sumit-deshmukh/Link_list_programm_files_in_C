#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedListTraversal(struct Node* ptr){
    while (ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr = ptr->next;
    }
    
    

}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->next = head;
    ptr->data=data;
    return ptr;
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;

    int i = 0;
    while (i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr ->next = p->next;
    p->next = ptr;
}
struct Node * insertionAtEnd(struct Node* head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p-> next;

    }
    p -> next = ptr;
    ptr->next = NULL;
    return head;

    
}
struct Node * insertionAfterNode(struct Node* head, struct Node* prevNode,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->data = data;
   
    ptr ->next = prevNode->next;

    prevNode->next = ptr;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    // allocate memory in the heape
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    
    head->data = 5;
    head->next = second;

    second -> data = 6;
    second -> next = third;

    third -> data = 8;
    third ->next =NULL;
    
    printf("before insertion\n");
    linkedListTraversal(head);
     head = insertAtFirst(head,3);
     head = insertAtIndex(head,78,2);
    printf("After insertion\n");
     head = insertionAtEnd(head,67);
    head = insertionAfterNode(head, second,2);
    linkedListTraversal(head);
    
    return 0;

}
