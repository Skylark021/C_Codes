#include<stdio.h>
int main()
{
	int i,n,l;
	int a[n];
	printf("Enter the length of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of the array:");
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);	
	}
	return 0;
}
