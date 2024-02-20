#include<stdio.h>
int main()
{
	int a[10];
	int i,n,lar,u;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter elements:");
		scanf("%d,",&a[i]);
	
	}
	while(i<n)
	{
		scanf("%d",a[i]);
	}
	u=a[0];
	while(i<n)
	{
		if(a[i]>u)
		{
			u=a[i];
		}
		i++;
	}
	printf("The largest is:%d",u);
	return 0;
}
