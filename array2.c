#include<stdio.h>
int main()
{
	int i,j;
	int a[5];
	printf("enter any 5 number ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=4;j++)
	{
		printf("%d",j,a[j]);
	}
	return 0;
	
	
}
