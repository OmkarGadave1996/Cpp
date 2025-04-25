/*Structure using "Has-a" Relationship*/
#include<stdio.h>
typedef struct Student
{
	int Fid;
	int Bid;
	char name[20];
	float Distance;
}Student;
typedef struct Placed
{
	Student info;
	char Company[20];
	char Designation[20];
}Placed;
void arraystore(Placed*, int);
void arrayprint(Placed*, int);
void main()
{
	Placed arr[3];
	arraystore(arr,3);
	arrayprint(arr,3);
}
void arraystore(Placed* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{
		printf("Enter the Firstbit ID: \n");
		scanf("%d",&ptr[i].info.Fid);
		printf("Enter the Batch ID: \n");
		scanf("%d",&ptr[i].info.Bid);
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
void arrayprint(Placed* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{
		printf("%d\n",ptr[i].info.Fid);
		printf("%d\n",ptr[i].info.Bid);
		printf("%s\n",ptr[i].info.name);
		printf("%f\n",ptr[i].info.Distance);
		printf("%s\n",ptr[i].Company);
		printf("%s\n",ptr[i].Designation);
	}
}