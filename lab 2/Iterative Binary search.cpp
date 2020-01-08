#include<stdio.h>

int main()
{
	int a[10]={12,13,14,25,28,30,35};
	int x,mid,s,e,flag=0;
	printf("Enter search number=");
	scanf("%d",&x);
	s=0;
	e=7;
	while(s<e)
	{
		mid=(s+e)/2;
		if(a[mid]>x)
		{
			e=mid;
		}
		else if(a[mid]<x)
		{
			s=mid+1;
		}
		else if(a[mid]==x)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("Data found at index a[%d]",mid);
	}
	else
	{
		printf("Data not found");
	}
	
	return 0;
}
