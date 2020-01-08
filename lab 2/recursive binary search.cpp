#include<stdio.h>

int rebinary(int a[],int s,int e,int x)
{
   int mid;
    if(s<e)
	{
		mid=(s+e)/2;
		 if(a[mid]<x)
		 {
		 	return rebinary(a,mid+1,e,x);
		 }
		 else if(a[mid]>x)
		 {
		 	return rebinary(a,s,mid,x);
		 }
		 else
		 {
		 	return mid;
		 }
		
	}
	
	else 
	{
		return -1;
	}
	
}
int main()
{
	int a[10]={12,13,14,25,28,30,35};
	int x,mid,s,e,flag=0;
	printf("Enter search number=");
	scanf("%d",&x);
	s=0;
	e=7;
    flag=rebinary(a,s,e,x);
	if(flag!=-1)
	{
		printf("Data found at index a[%d]",flag);
	}
	else
	{
		printf("Data not found");
	}
	
	return 0;
}
