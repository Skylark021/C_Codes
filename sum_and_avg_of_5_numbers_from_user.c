#include<stdio.h>
int main()
{
	int i,n,sum=0,avg;
	for(i=0;i<5;i++)
	{
		printf("Enter number:");
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("%d",sum);
	avg=sum/5;
	printf("\n%d",avg);
	
	return 0;
	
}
