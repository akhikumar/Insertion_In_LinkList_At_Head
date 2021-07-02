#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
int isEmpty(struct Node * head){
    if(head==NULL)
    {
        return 1;
    }
    else
    return 0;
}
int isFull(struct Node * head)
{
   struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
   if(ptr==NULL)
   {
       return 1;
   }
   else 
   return 0;
}

void printLinkList(struct Node * head)
{
    if(isEmpty(head))
    {
        printf("The linkLIst is empty so first insert data the  print !!!\n");
    }
    else
    {
        struct Node * ptr=head;
        while(head!=NULL)
        {
            printf("The element are : %d \n",head->data);
            head=head->next;
        }
        // printf("The element are %d\n",ptr->data);

    }
}

struct Node * insertAtHead(struct Node * head, int data)
{   
    struct Node * ptr =(struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    if(isFull(head))
    {
        printf("The linklist is overflow\n");
    }
    if(head==NULL)
    { 
        ptr->next=NULL;
        head=ptr;
        printf("The %d element inserted successfully\n",ptr->data);
    }
    else{
      ptr->next=head;
        head=ptr;  
    }
    return head;
}


int main(){
    struct Node * head;
    head=NULL;
     printLinkList(head);
    head=insertAtHead(head,20);
    head=insertAtHead(head,40);
    head=insertAtHead(head ,60);
    head=insertAtHead(head ,80);
     printLinkList(head);
    // insertAtEnd(head);
    // insertINBetween(head);
    // insertAfterNode(head);
    return 0;
}