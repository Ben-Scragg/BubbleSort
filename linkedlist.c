#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

    struct node *head = NULL;
    struct node *second = NULL;

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head -> data = 54;      
    head -> next = second;

    second -> data = 32;
    second -> next = NULL;

    printf("%d", head->next->data);

    return 0;
}