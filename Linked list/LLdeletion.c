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
struct Node* deletFirst(struct Node* head){
    struct Node*ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node* deleAtIndex(struct Node*head, int index){
    struct Node *p = head;
    struct Node *q = head ->next;
    for (int  i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
    

}
struct Node* deletAtEnd(struct Node*head){
    struct Node* p = head;
    struct Node* q = p->next;

    while(q->next!=NULL){
        p = p ->next;
        q = q ->next;
    }
    p->next = NULL;
    free(q);
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

    linkedListTraversal(head);

    // head = deletFirst(head);
    // head = deleAtIndex(head,2);
    head = deletAtEnd(head);
    linkedListTraversal(head);

    
    return 0;

}