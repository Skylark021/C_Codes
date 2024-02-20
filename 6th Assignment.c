#include<stdio.h>
int fibo();
int main()
{
	int a=fibo();
}
int fibo()
{
	int n1=0,n2=1;
	int i,n,fib;
	fib=n1+n2;
	printf("Enter a limit:"); 
	scanf("%d",&n);
	printf(" %d ",n1);
	printf(" %d ",n2);
	for(i=0;i<=n-3;i++)
	{
		printf(" %d ",fib);
		n1=n2;
		n2=fib;
		fib=n1+n2;
		
	}
	return 0;
	
}
