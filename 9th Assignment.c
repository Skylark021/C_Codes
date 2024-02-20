#include<stdio.h>
int main()
{
	int a[3][5],i,j,count=3,total[3],per,cnt=0,ind[3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter marks for student %d for subject %d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		total[i]=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]<40)
			{
				printf("\nStudent %d has failed",i+1);
				count--;
				break;	
			}
		
			else
			{
				total[i]=total[i]+a[i][j];
			
			}
		}
	}
	
	for(i=0;i<3;i++)
	{
		ind[i]=total[i]/5;
		if(ind[i]>75)
			{
				printf("\nstudent %d has attained Distinction",i+1);
				cnt++;
				break;
			}		
	}
	printf("\nNumber of students that have passed is %d",count);
	per=(count*33.33);
	printf("\nPercentage of students that have passed: %d" ,per);
	printf("\nNumber of students that have attained distinction are %d",cnt);
}
