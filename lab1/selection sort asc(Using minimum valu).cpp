# include<stdio.h>

int main()
{
	int a[10]={4,2,8,9,3,1};
	int i,j,pos,min,n=6,temp;
	for(i=0;i<n;i++)
	{
		pos=i;
		min=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;
				min=a[j];
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
