#include<stdio.h>
int main()
{
	int i,n;
	int a[10];
	int odd=0,even=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter elements:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even=even+a[i];
		}
		else
		{
			odd=odd+a[i];
		}
	}
	printf("\nThe sum of even numbers in the array is:%d",even);
	printf("\nThe sum of odd numbers in the array is:%d",odd);
}
