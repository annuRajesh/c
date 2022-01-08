#include <stdio.h>
#include<stdlib.h>
int main()
{
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;


int choice;
head=0;
   while(choice)
   {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("\nEnter the data:");
     scanf("%d",&newnode->data);
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
     printf("\ndo you want to cotinue(0/1)?");
     scanf("%d",&choice);
     
   }
   temp=head;
   while(temp!=0)
   {
       printf("%d\n",temp->next);
       temp=temp->next;
   }
}

