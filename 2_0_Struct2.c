/*Structure using "Has-a" Relationship*/
#include<stdio.h>
typedef struct Student
{
	int Firstbit_id;
	int Batch_id;
	char name[20];
	float Distance;
}Student;
typedef struct Placed_Student
{
	Student info;
	char Company[20];
	char Designation[20];
}Placed_Student;
void arraystore(Placed_Student*, int);
void arrayprint(Placed_Student*, int);
void main()
{
	Placed_Student arr[3];
	arraystore(arr,3);
	arrayprint(arr,3);
}
void arraystore(Placed_Student* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{
		printf("Enter the Firstbit ID: \n");
		scanf("%d",&ptr[i].info.Firstbit_id);
		printf("Enter the Batch ID: \n");
		scanf("%d",&ptr[i].info.Batch_id);
		printf("Enter the Student Name: \n");
		scanf("%s",&ptr[i].info.name);
		printf("Enter the Distance traveled by Student: \n");
		scanf("%f",&ptr[i].info.Distance);
		printf("Enter the Company Name: \n");
		scanf("%s",&ptr[i].Company);
		printf("Enter the Designation: \n");
		scanf("%s",&ptr[i].Designation);
	}
}
void arrayprint(Placed_Student* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{
		printf("%d\n",ptr[i].info.Firstbit_id);
		printf("%d\n",ptr[i].info.Batch_id);
		printf("%s\n",ptr[i].info.name);
		printf("%f\n",ptr[i].info.Distance);
		printf("%s\n",ptr[i].Company);
		printf("%s\n",ptr[i].Designation);
	}
}