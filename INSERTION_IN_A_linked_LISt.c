#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node *adderess;
    /* data */
};

void print(struct node *head)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->x);
    }
}
int main()
{
    // struct node* ptr= malloc(sizeof(struct node));
    // ptr->x=a;
    // ptr->adderess=NULL;
    // ptr->adderess=head;
    // head=ptr;
    struct node *head = malloc(sizeof(struct node));
    head->x = 90;
    head->adderess = NULL;
    struct node *middle = malloc(sizeof(struct node));
    middle->x = 99999;
    middle->adderess = head->adderess;
    head->adderess = middle;
    struct node *next = malloc(sizeof(struct node));
    next->x = 90;
    head->adderess = next;
    next->adderess = NULL;
    struct node *new = malloc(sizeof(struct node));
    new->x = 999;
    new->adderess = NULL;
    new->adderess = head;
    head = new;
    print(head);
    return 0;
}