/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;


//function used to print the given linkList
void printLinkList()  
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


void insertAtBeginning(int data)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void insertAtEnd(int data)
{
    struct node *newNode,*temp;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}

void insertAtPosition(int data, int pos)
{
    struct node *newNode,*temp,*temp1;
    newNode=NULL;
    temp=head;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    
    while(pos>1)
    {
        temp1=temp;
        temp=temp->next;
        pos--;
    }
    newNode->next=temp1->next;
    temp1->next=newNode;
}


void deleteFirstNode()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}


void deleteLastNode()
{
    struct node *temp,*temp2;
    temp=head;
    while(temp->next!=NULL)
    {
        temp2=temp;
        temp=temp->next;
    }
    temp2->next=NULL;
    free(temp);
    
}

void deleteAtPostion(int pos)
{
    
    struct node *temp,*temp1;
    temp=head;
    while(pos>1)
    {
        temp1=temp;
        temp=temp->next;
        pos--;
    }
    temp1->next=temp->next;
    free(temp);
}


int main()
{
    head=(struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=NULL;
   
   struct node *second=NULL;
   struct node *third=NULL;
   
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   head->next=second;
   second->data=2;
   
   second->next=third;
   third->data=3;
   third->next=NULL;
    
printLinkList();
printf("\n");
insertAtBeginning(0);
printLinkList();
printf("\n");
insertAtEnd(4);
printLinkList();
printf("\n");
insertAtPosition(5,3);
printLinkList();
printf("\n");
deleteFirstNode();
printLinkList();

printf("\n");
deleteLastNode();
printLinkList();
printf("\n");
insertAtPosition(555,5);
printLinkList();
printf("\n");
deleteAtPostion(2);
printLinkList();
    return 0;
}
