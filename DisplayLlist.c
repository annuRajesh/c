#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    
    struct node *nxt;
}node;
struct node *Llist(){
    int data,flag;
    node *temp=(struct node*)malloc(sizeof(struct node));
    node *p=temp;
     do{
        printf("\nElements: ");
        scanf("%d",&data);
         temp->data=data;
        temp->nxt=0;
         printf("Enter(1/0)");
        scanf("%d",&flag);
        if(flag){
            temp->nxt=(node*)malloc(sizeof(node));
            temp=temp->nxt;
            temp->nxt=0;
        }
    }
     while(flag);
    //printf("\n");
    return p;
}
void display(node *p){
    while(p!=0){
        printf("%d\t",p->data);
       
        p=p->nxt;
       
    }
    
}
int main(){
    node*a=0;
    printf("ENter the elements: ");
    a=Llist();
    display(a);
}
        
