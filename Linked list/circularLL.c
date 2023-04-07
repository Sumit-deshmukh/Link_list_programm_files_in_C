#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedListTraversal(struct Node* head){
    struct Node *ptr = head;
    do
    {
         printf("Element:%d\n",ptr->data);
        ptr = ptr->next;
        
    } while (ptr!=head);
    
    
    

}
 struct Node * inser_at_first(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr ->data = data;

    struct Node * p = head ->next;
    while (p->next !=head)
    {
       p = p ->next;

    }
     p->next = ptr;
     ptr ->next = head;
     head = ptr;
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
    third ->next = head;

    linkedListTraversal(head);
    head=inser_at_first(head,67);
    linkedListTraversal(head);

    
    return 0;

}