#include<stdio.h>
#include<stdlib.h>

struct myNode
{
    int data;
    struct myNode *prev;
    struct myNode *next; 
};

void printingLinkedList(struct myNode *head)
{
    struct myNode *ptr = head;
    while (ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

// Printing linked list in reverse order
void printingLinkedListInReverse(struct myNode *fifth)
{
    struct myNode *ptr = fifth;
    while (ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr = ptr->prev;
    }
}

int main()
{
    struct myNode *head;
    struct myNode *second;
    struct myNode *third;
    struct myNode *fourth;
    struct myNode *fifth;

    head = (struct myNode*)malloc(sizeof(struct myNode));
    second = (struct myNode*)malloc(sizeof(struct myNode));
    third = (struct myNode*)malloc(sizeof(struct myNode));
    fourth = (struct myNode*)malloc(sizeof(struct myNode));
    fifth = (struct myNode*)malloc(sizeof(struct myNode));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = fourth;
    third->prev = second;

    fourth->data = 40;
    fourth->next = fifth;
    fourth->prev = third;

    fifth->data = 50;
    fifth->next = NULL;
    fifth->prev = fourth;

    printf("Printing the linked list in straight order\n");
    printingLinkedList(head);
    printf("Printing the linked list in reverse order\n");
    printingLinkedListInReverse(fifth);

    return 0;
}
