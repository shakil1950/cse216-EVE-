#include<stdio.h>

int main()
{
	int a[10]={12,3,2,7,44,37,85};
	int i,flag=0,x;
	printf("Enter your find number=");
	scanf("%d",&x);
	
	for(i=0;i<7;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
			
		}
	}
	
	if(flag==1)
	{
		printf("Data found at index a[%d]",i);
	}
	else
	{
	printf(" Data Not found");	
	} 
   return 0;
}
