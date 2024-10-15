#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *adderess;
};

int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=160;
    head->adderess=NULL;
    int value = head->data;
    printf("%d",value);
    return 0;
}