#include<stdio.h>
int main()
{
	int i,j,x=0;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",x);
			x=x+1;
		}
		printf("\n");
	}
	return 0;
}
