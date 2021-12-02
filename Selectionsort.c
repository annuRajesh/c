#include<stdio.h>

int main()
{
	int i,n,j,num,a[100];int c=0;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c++;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c++;
				num=a[i];
				c++;
				a[i]=a[j];
				c++;
				a[j]=num;
				c++;
			}
			c++;
		}
		c++;
	}
	printf("The sorted elements are: ");
	for(i=0;i<n;i++)
	{
		c++;
		printf("%d",a[i]);
		printf(" ");

	}
	printf("\nTime complexity is %d",c);
	
	return 0;
	
}


