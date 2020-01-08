#include<stdio.h>
int main()
{
	int a[10]={4,6,2,1,9,7,12};
	int max,pos,i,j,n=7,temp;
	for(i=0;i<n;i++)
	{
		max=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]<a[j])
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
