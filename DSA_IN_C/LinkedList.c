#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *newNode, *head;
void createNode(struct node *head, int size)
{
    printf("enter the elements of the node\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (int i = 1; i < size; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node *));
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}
void displayNode(struct node *head, int size)
{
    temp = head;
    for (int i = 0; i < size; i++)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int option;
    int size;
    int continuation = 1;
    head = (struct node *)malloc(sizeof(struct node *));
    while (continuation != 0)
    {
        printf("choose from the below menu \n1. creation of node\n2. display of node \n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("enter the size of the node\n");
            scanf("%d", &size);
            createNode(head, size);
            break;
        case 2:
            displayNode(head, size);
            break;
        }
        printf("press 0 to exit and 1 to continue\n");
        scanf("%d", &continuation);
    }
    return 0;
}

