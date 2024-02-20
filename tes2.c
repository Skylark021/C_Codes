#include<stdio.h>

struct Student
{
    int marks[5];
    int total;
};

int main() 

{
    struct Student students[3];
    int i,j,count=3,total[3],per,cnt = 0;

    for(i=0;i<3;i++) 
	{
        total[i] = 0;
        printf("Enter marks for student %d:\n",i+1);
        for (j=0;j<5;j++) 
		{
            printf("Enter marks for subject %d: ",j+1);
            scanf("%d", &students[i].marks[j]);
            total[i] += students[i].marks[j];
        }
    }
    for (i=0;i<3;i++) 
	{
        if (total[i]<40*5) 
		{
            printf("\nStudent %d has failed",i+1);
            count--;
        } 
		else if (total[i]>=75*5) 
		{
            printf("\nStudent %d has attained Distinction",i+1);
            cnt++;
        }
    }
    printf("\nNumber of students that have passed is %d", count);
    per = (count * 100) / 3;
    printf("\nPercentage of students that have passed: %d", per);
    printf("\nNumber of students that have attained distinction are %d\n", cnt);

    return 0;
}

