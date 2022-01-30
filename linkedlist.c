#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
void create()
{
     
    int data,flag;
    head=(struct node*)malloc(sizeof(struct node));
    int choice;
    head=0;
    do{
         newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
           
            
        }
        else
        {
           
            temp->next=newnode;
            temp=newnode;
            
        }
        printf("Do you want to continue");
            scanf("%d",&flag);
    }
    while(flag);
}
   
void traverse()
{
   temp=head;
   while(temp!=0)
   {
       printf("%d\n",temp->data);
       temp=temp->next;
   }
}

int main()
{
   
   
   
     create();
     traverse();
   
   

    return 0;
}
