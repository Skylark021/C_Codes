#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter natural numbers:");
	scanf("%d",&n);
	int sum=0;
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		sum=sum+i;
	}
	printf("The sum of n natural numbers is:%d",sum);
	return 0;
}
