#include<stdio.h>
int main()
{
	int a[10]={2,5,1,8,9,55,3,12};
	int i,j,max,pos,temp,n=8;
	for(i=n-1;i>0;i--)
	{
		pos=i;
		max=a[i];
		for(j=0;j<i;j++)
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
