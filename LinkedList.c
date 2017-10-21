#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int x){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

void Print(){
    struct Node* temp = head;
    printf("List is:");
    while(temp!=NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    printf("How many Numbers?:");
    int n,i,x;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;
}
