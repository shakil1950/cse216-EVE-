#include<stdio.h>
int relinear(int a[],int s,int e,int x)
{
	if(s>e)
	{
		return -1;
		
	}
	
	if(a[s]==x)
	{
		return s;
	}
	
	relinear(a,s+1,e,x);
}
int main()
{
	int a[10]={12,3,2,7,44,37,85};
	int i,flag,x,s,e;
	printf("Enter your find number=");
	scanf("%d",&x);
	s=0;
	e=7;
	flag=relinear(a,s,e,x);
	
	if(flag!=-1)
	{
		printf("Data found at index a[%d]",flag);
	}
	else
	{
	printf(" Data Not found");	
	} 
   return 0;
}
