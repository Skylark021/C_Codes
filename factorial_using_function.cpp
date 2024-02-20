//to calculate factorial using function
#include<stdio.h>
int fact();
int main()
{
	int a=fact();
	printf("The factorial of the number is: %d",a);
	
}
	int fact()
	{
		int i,n,fac=1;
		printf("Enter a number:");
		scanf("%d",&n);
		for(i=n;i>=1;i--)
		{
			fac=fac*i;
			
		}
		return fac;
	}


