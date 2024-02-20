#include<stdio.h>
int main()
{
	int a[10];
	int i,n,lar;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter elements:");
		scanf("%d,",&a[i]);
	
	}
	
	for(i=1;i<n;i++)
	{
		if(a[0]>=a[i])
		{
			printf("Largest is:%d",a[0]);
		}
	}
	
	return 0;
}
