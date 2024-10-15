#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *address;
};
 
int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data=160;
    head->address=NULL; 

    struct node *current = malloc(sizeof(struct node));
    current->data=320;
    current->address=NULL;
    head->address=current;

    current=malloc(sizeof(struct node));
    current->data=480;
    current=NULL;
    head->address->address=current;
    
}