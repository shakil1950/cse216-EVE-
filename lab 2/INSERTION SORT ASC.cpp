
#include<stdio.h>

int main()
{
	int i,j=0,pos,n=10;
	int a[100]={1,8,23,5,8,9,3,2};
	int b[100];
	b[0]=a[0];
	for(i=1;i<8;i++)
	{
	j=i-1;
	while(a[i]<b[j] && j>=0)
	{
		b[j+1]=b[j];
		j--;
	}
	b[j+1]=a[i];
	
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d\t",b[i]);
	}
	
	return 0;
}
