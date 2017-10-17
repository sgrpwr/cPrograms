#include<stdio.h>

struct node{
    int info;
    struct node *link;
};

struct node *START=NULL;

struct node* createNode(){
    struct node *n;
    n= (struct node *)malloc(sizeof(struct node));
    return(n);
}

void insertNode(){
    
}
int main(){
    return 0;
}
//code reviewed 


