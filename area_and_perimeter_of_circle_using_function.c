#include<stdio.h>
float area();
float per();
int main()
{
	
	float a=area();
	printf("\nThe area of the circle is: %f",a);
	
	float b=per();
	printf("\nThe perimeter of the circle is: %f",b);
}
	float area()
	{
		const float pi=3.14;
		float res,r;
		printf("Enter radius for area:");
		scanf("%f",&r);
		res=pi*r*r;
		return res;
	}
	
	float per()
	{
		float peri,r;
		printf("\nEnter radius for perimeter:");
		scanf("%f",&r);
		peri=2*3.14*r;
		return peri;
	}

