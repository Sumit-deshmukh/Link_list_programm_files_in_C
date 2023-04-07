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

    linkedListTraversal(head);

    
    return 0;

}