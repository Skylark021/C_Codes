#include<stdio.h>
int main()
{
	int i,j;
	int x[5];
	printf("enter any 5 number");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=0;j<=4;j++)
	{
		printf("x[%d]=%d",j,x[j]);
	}
	return 0;
}
