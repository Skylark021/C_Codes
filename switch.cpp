#include<stdio.h>
int main()
{
	do
	{
	
	int n,ch;
	int fac=1;
	int cube,sq;
	printf("\nEnter a number:");

	printf("\n-----Menu-----");
	printf("\n1.Factorial \n2.Even number/odd number \n3.Positive/Negative \n4.Square \n5.cube");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	getchar();    																						//to prevent invalid alphabet input
	switch(ch)
		{
			case 1: printf("\nEnter a number to find the factorial:");
				scanf("%d",&n);
				while(n>=1)
			{
				fac=fac*n;
				n--;
			
			}
			printf("The factorial of the number is: %d",fac);
			break;

			case 2: printf("\nEnter a number to find if it is even or odd:");
				scanf("%d",&n);
				if(n%2==0)
				{
					printf("The number is even");
				}
				else
				{
					printf("The number is odd");
				}
					break;
			case 3: printf("\nEnter a number to find if it is positive or negative:");
				scanf("%d",&n);
				if(n>0)
				{
					printf("number is positive");
				}
				else
				{
					printf("Number is negative");
				}
					break;
			case 4: printf("\nEnter a number to find out its square:");
				scanf("%d",&n);
				sq=n*n;
				printf("The square of the number is:%d",sq);
				break;
			
			case 5: printf("\nEnter a number to find out its cube:");
				scanf("%d",&n);
				cube=n*n*n;
				printf("The cube of the number is:%d",cube);
				break;
			
			default:
			printf("You have entered the wrong choice");
			break;
	}
	}	
	while(1);
	return 0;
}
