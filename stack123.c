#include <stdio.h>
#include<stdlib.h>
int i,stack[100],size,item;
int top=-1;
void push()
{
    if(top==size-1)
    {
        printf("overflow");
    }
    else
    {
    int n;
    printf("\nEnter the element to be pushed: \n");
    scanf("%d",&n);
    top++;
    stack[top]=n;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("\nPopped element is: %d\n",item);
        
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\nTop element is %d\n",stack[top]);
    }
}
void Display()
{
    if(top==-1)
    {
         printf("Stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}

int main()
{
    int choice;
   printf("Enter the size off the stack: ");
   scanf("%d",&size);
   do{
       printf("\n------------------------------------------------\n");
       printf("\n\t\t1.PUSH\t\t2.POP\t\t3.PEEK\t\t4.DISPLAY\n");
       printf("\n------------------------------------------------\n");
       printf("Enter the choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:push();
           break;
           case 2:pop();
           break;
           case 3:peek();
           break;
           case 4:Display();
           break;
           case 5:
           default:
           break;
       }
   }
   while(choice!=5);
   

    return 0;
}
