#include<stdio.h>
int main()
{
    int num,mid,i,size,a[10],key,first,end,flage=0;int c=0;
    printf("enter the size of array ");
    scanf("%d",&size);
    printf("enter the %d elements of array  ",size);
    for(i=0;i<size;i++)
{
c++;
    scanf("%d",&a[i]);
}
printf("Enter the element to be founded ");
scanf("%d",&key);
first=0;
end=size-1;
for(first=0;first<=end;first++)
	{
		c++;
    		mid=(first+end)/2;
    		if(key<a[mid])
    			{
    				c++;
				end=mid-1;
    			}c++;
   		  if(key>a[mid])
    		{
   			 c++;
       		 first=mid+1;
    		}c++;
   		 if(key==a[mid])
    		{
    			c++;
			printf("element found at position %d  ",mid+1);
			flage=1;
    		}c++;
	}
if(flage==0)
	{
		c++;
    		printf("element not found");
	}c++;
	printf("\nTime complexity is %d",c);
	printf("\nSpace complexity is %d",32+4*size);

	return 0;
}
