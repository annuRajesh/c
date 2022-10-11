#include <stdio.h>
#include<stdlib.h>

int main()
{
   int RQ[100],RQ1[100],RQ2[100],i,n,j=0,thm=0,initial,k,size,l=0,move;
   printf("enter the number of requests: ");
   scanf("%d",&n);
   printf("Enter the sequence of requests: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&RQ[i]);
   }
   printf("Enter the initial head position: ");
   scanf("%d",&initial);
   printf("Enter the disk size: ");
   scanf("%d",&size);
   
   
      for(i=0;i<n;i++){
      if(RQ[i]>initial)
       {
           RQ1[j]=RQ[i];
           
           j++;
           
          
       }
       else{
           RQ2[l]=RQ[i];
           l++;
           
           
       }
   }
   for(i=0;i<j;i++){
       for(k=i+1;k<j;k++){
           if(RQ1[i]>RQ1[k])
           {
               int temp=RQ1[i];
               RQ1[i]=RQ1[k];
               RQ1[k]=temp;
           }
       }
   }
   for(i=0;i<l;i++){
       for(k=i+1;k<l;k++){
           if(RQ2[i]>RQ2[k])
           {
               int temp=RQ2[i];
               RQ2[i]=RQ2[k];
               RQ2[k]=temp;
           }
       }
   }
  
   
   
thm=(size-1-initial)+(size-1-0)+(RQ2[l-1]-0);



printf("Total head moment is %d",thm);
    return 0;
}

