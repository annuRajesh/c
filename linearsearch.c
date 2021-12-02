#include<stdio.h>


int main()
{
	int i,n,k,flag=0;int c=0;
	int a[100];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
	c++;
		scanf("%d",&a[i]);
		
	}
	printf("Enter the element to be searched:");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
	c++;
		if(a[i]==k)
		{
			printf("\nThe element %d is found in the position %d",k,i);
			flag=1;
			c++;
		}
		if(flag==0)
		{
			printf("\nElement is not found");
		}
	}
	printf("\nTime complexity is %d",c);
	
return 0;
}


