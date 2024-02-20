#include<stdio.h>
int cnt=0;
int count(int n)
{
	if(n>0)
	{
		cnt++;
		count(n/10);
	}
	else
	{
		return cnt;
	}
}
int main()
{
	int c,n=0;
	printf("Enter number:");
	scanf("%d",&n);
	c=count(n);
	printf("%d",c);
}
