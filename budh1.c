#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct myStack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct myStack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    
}

int isFull(struct myStack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    
}

int main()
{
    struct myStack *s; 
    s->size = 100;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));

    if (isEmpty(s))
    {
        printf("My stack is empty\n");
    }
    else
    {
        printf("My stack is not empty\n");
    }
    
    return 0;
}
