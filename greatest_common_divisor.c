#include<stdio.h>
int main()
{
	int n1,n2,d,i;
	printf("Enter num 1:");
	scanf("%d",&n1);
	printf("Enter num 2:");
	scanf("%d",&n2);
	
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			d=i;
		}
	}
	
	printf("The greatest common divisor is:%d",d);
	return 0;
}
