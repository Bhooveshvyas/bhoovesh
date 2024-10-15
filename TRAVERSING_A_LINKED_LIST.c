#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *address;
};


void print(struct node *head){
    int ct=0;
    if(head==NULL)printf("THE LIST IS EMPTY.");
    else{struct node *link=NULL;
    link=head;
    while(link!=NULL){
        ct++;
        printf("%d->",link->data);
        link=link->address;
    }
    }
}



int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data=3;
    head->address=NULL; 

    struct node *current = malloc(sizeof(struct node));
    current->data=320;
    current->address=NULL;
    head->address=current;

    struct node *current2=malloc(sizeof(struct node));
    current2->data=480;
    current2->address=NULL;
    head->address->address=current2;

    print(head);

    free(head);
    free(current);
} 