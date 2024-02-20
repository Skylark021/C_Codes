#include<stdio.h>
float sur_area();
float vol();
int main()
{
	float a=sur_area();
	printf("The surface area of the cylinder is: %f",a);
	
	float b=vol();
	printf("The volume of the cylinder is: %f",b);
}
float sur_area()
{
	const float pi=3.14;
	float r,h,res;
	printf("Enter radius:");
	scanf("%f",&r);
	printf("Enter height:");
	scanf("%f",&h);
	res= 2*pi*r*h+2*pi*r*r;
	return res;
}
float vol()
{
	const float pi=3.14;
	float r,h,res;
	printf("\nEnter radius:");
	scanf("%f",&r);
	printf("\nEnter height:");
	scanf("%f",&h);
	res=pi*r*r*h;
	return res;
}
