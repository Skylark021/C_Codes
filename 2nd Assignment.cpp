#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float marks;
	
	printf("Enter student's marks for subject 1:");
	scanf("%d",&m1);
	
	printf("Enter student's marks for subject 2:");
	scanf("%d",&m2);
	
	printf("Enter student's marks for subject 3:");
	scanf("%d",&m3);
	
	printf("Enter student's marks for subject 4:");
	scanf("%d",&m4);
	
	printf("Enter student's marks for subject 5:");
	scanf("%d",&m5);
	
	
	if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
	{
	
		total=(m1+m2+m3+m4+m5);
		marks=(total*0.5);
		printf("\n%f",marks);
		if(marks>=75)
			{
				printf("\nStudent's Grade: Distinction");
			}
	
		else if(marks<=75 && marks>60)
			{
				printf("\nStudent's Grade : First Class");
			}
	
		else if(marks<=60 && marks>50)
			{
				printf("\nStudent's Grade : Second Class");
			}
	
		else 
			{
				printf("\nStudent's Grade : Third Class");
			}
	
	}
	
	else
		printf("\nStudent has failed");
	
	return 0;	
}
