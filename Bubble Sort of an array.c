#include<stdio.h>
int main()
{
	int a[6]={5,4,9,7,3,2};
	int i,j,hold;
	int n=6; //no.of elements
	// loop to control Passes:n-1=5
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;	
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}

