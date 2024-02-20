#include<stdio.h>
float area();
int main()
{
	float a=area();
	printf("The area of the triangle is: %f",a);
}
float area()
{
	float res,b,h;
	printf("Enter base:");
	scanf("%f",&b);
	printf("Enter height:");
	scanf("%f",&h);
	res=0.5*b*h;
	return res;
}
