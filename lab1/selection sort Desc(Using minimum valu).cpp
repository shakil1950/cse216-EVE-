#include<stdio.h>
int main()
{
	int a[10]={2,1,5,8,3,9};
	int i,n=6,j,temp,pos,min;
	for(i=n-1;i>0;i--)
	{
		pos=i;
		min=a[i];
		for(j=0;j<i;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;
			}
		}
		
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
