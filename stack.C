#include<stdio.h>
#include<stdlib.h>

int stack[100],top=-1;
int size;
void push()
{
 int N;
 printf("Enter the element to push \n\n\n\t\t\t");
 scanf("%d",&N);
 if(top==size-1)
 {
   printf("stack is overflow  you cant push \n");
   }
   else
   {
   top++;
   stack[top]=N;
   }
}
void pop()
{
  int  item;
  if(top==-1)
  {
  printf("stack is under flow \n");
  }
  else
  {
  item= stack[top];
  top--;
  printf("popped item  is: %d\n",item);
  }
 }
 void peak()
 {
  if(top==-1)
  {
    printf("stack is empty \n");
   }
   else
   {
   printf("\n\n\ttop element is: %d\n\n",stack[top]);
   }
   }
  void display()
  {
   int i;
   if(top==-1)
   {
    printf("stack is empty \n");
    }
    else
   
    {
    printf("THe Elements are: \n\n");
    for(i=top;i>=0;i--)
   {
    printf("\t\t\n\n%d\n\n",stack[i]);
    }
    }
    }
 int main()
  {
   int opt;
   printf("Enter the size of the stack\n");
   scanf("%d",&size);
   
do
   {
   
    printf("\n\t1.push\n\n\t2.pop\n\n\t3.peak\n\n\t4.display\n\n\t5.exit\n");
    //printf("-------------------------------------------------------------");
    printf("\n\n enter the choice\n\n\t\t\t");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:push();
    break;
    case 2:pop();
    break;
    case 3:peak();
    break;
    case 4:display();
    break;
    case 5:exit(0);
    default:
    printf("invalid input");
    break;
    }
    }while(opt!=5);
    return 0;
    }
}
