#include<stdio.h>
int main()
{
	int a[10]={2,5,23,4,3,1};
	int i,j=0,n=6;
	int b[10];
	b[0]=a[0];
	
	for(i=0;i<n;i++)
	{
		j=i-1;
		while(j>=0 && a[i]>b[j])
		{
			b[j+1]=b[j];
			j--;
		}
		b[j+1]=a[i];
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	
	return 0;
}
