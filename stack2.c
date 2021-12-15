#include <stdio.h>

int main()
{
  int a[50],top=-1,k,m,i,n;
  char ch;
  
  printf("\n\tProgram to push,pop or display an element from a stack");
  printf("\n______________________________________________________\n");
  printf("Enter the size: ");
  scanf("%d",&n);
  do{
      printf("MENU");
      printf("\n\n\n1.push\n2.pop\n3.Display\n4.exit");
      printf("\n\nEnter the choice: ");
      scanf("%d",&m);
      if(m==1)
      {
          if(top==n-1)
          {
              printf("OVERFLOW");
          }
              else
              {
                  printf("Enter the element to be inserted: ");
                  scanf("%d",&k);
                  top++;
                  a[top]=k;
                  printf("The entered element is : %d ",a[top]);
                  
              }
          
          
      }
      if(m==2)
      {
          if(top==-1)
          {
              printf("UNDERFLOW");
          }
          else
          {
              printf("The deleted element is: %d",a[top]);
              top--;
          }
      }
      if(m==3)
      {
          if(top==-1)
          {
              printf("STACK UNDERFLOW");
          }
          else
          {
              printf("\n\tStack is: ");
              for(i=top;i>=0;i--)
              {
                 printf("\t\t%d",a[i]) ;
              }
          }
      }
      else{
          break;
      }
      printf("\n\n\tdo you want to continue(Y/N)?");
      scanf("%c",&ch);
  
  }
  while((ch=='Y')||(ch=='y'));
  getch();

    return 0;
}
