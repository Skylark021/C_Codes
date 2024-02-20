#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,marks;
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
	
		marks=((m1+m2+m3+m4+m5)/500)*100;
	
		if(marks>75)
			{
				printf("Student's Grade: Distinction");
			}
	
		else if(marks<=75 && marks>=60)
			{
				printf("Student's Grade : First Class");
			}
	
		else if(marks<=60 && marks>=50)
			{
				printf("Student's Grade : Second Class");
			}
	
		else 
		
			{
				printf("Student's Grade : Third Class");
			}
	
	}
	
	else{
	
		printf("Student has failed");	
		}
	return 0;	
}
