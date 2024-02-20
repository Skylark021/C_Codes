#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The divisor(s) are:");
    for(i=1;i<=n/2;i++) 
	{
        if(n%i==0)
        {
        	printf("\n%d",i);
        	sum=sum+i;
    	}	
	}
    if(sum==n)
    {
    	printf("\nNumber %d is a perfect number",n);
	}
	else
	{
		printf("\nNumber %d is not a perfect number",n);
	}
	return 0;
}	


