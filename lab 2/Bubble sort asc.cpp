#include <stdio.h>
int main()
{
	int a[20]={2,7,4,9,1,45,62,32,12};
	int i,j,n=9,temp;
	
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
