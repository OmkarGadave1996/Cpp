/*Started C++ "Has-a" relationship*/
#include<stdio.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}Date;
typedef struct Employee
{
	int id;
	char name[20];
	int salary;
	Date dob;
	Date doj;
	Date dol;
}Employee;
void arraystore(Employee*, int);
void arrayprint(Employee*, int);
void main()
{
	Employee arr[3];
	arraystore(arr,3);
	arrayprint(arr,3);
}
void arraystore(Employee* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{	
		printf("Enter the Employee ID: \n");
		scanf("%d",&ptr[i].id);
		printf("Enter the Employee Name: \n");
		scanf("%s",&ptr[i].name);
		printf("Enter the Employee Salary: \n");
		scanf("%d",&ptr[i].salary);
		printf("Enter the Employee Date of Birth(dd/mm/yy): \n");
		scanf("%d",&ptr[i].dob.day);
		scanf("%d",&ptr[i].dob.month);
		scanf("%d",&ptr[i].dob.year);
		printf("Enter the Employee Date of Joining(dd/mm/yy): \n");
		scanf("%d",&ptr[i].doj.day);
		scanf("%d",&ptr[i].doj.month);
		scanf("%d",&ptr[i].doj.year);
		printf("Enter the Employee Date of Leaving(dd/mm/yy): \n");
		scanf("%d",&ptr[i].dol.day);
		scanf("%d",&ptr[i].dol.month);
		scanf("%d",&ptr[i].dol.year);
	}
}
void arrayprint(Employee* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{
		printf("%d\t",ptr[i].id);
		printf("%s\t",ptr[i].name);
		printf("%d\n",ptr[i].salary);
		printf("%d /",ptr[i].dob.day);
		printf("%d /",ptr[i].dob.month);
		printf("%d\n",ptr[i].dob.year);
		printf("%d /",ptr[i].doj.day);
		printf("%d /",ptr[i].doj.month);
		printf("%d\n",ptr[i].doj.year);
		printf("%d /",ptr[i].dol.day);
		printf("%d /",ptr[i].dol.month);
		printf("%d\n",ptr[i].dol.year);
	}
}