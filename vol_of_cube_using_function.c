#include<stdio.h>
float vol();
int main()
{
	float a=vol();
	printf("The volume of cube is:%f",a);
}
float vol()
{
	float s,res;
	printf("Enter side of the cube:");
	scanf("%f",&s);
	res=s*s*s;
	return res;
}

