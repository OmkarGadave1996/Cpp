#include<stdio.h>
#include <cstring>
struct SalesManager
{
	int id;
	char name[6];
	double salary;
	int target;
	double incentive; 
};
void display(SalesManager* ptr);
int main()
{
	SalesManager SM;
	SM.id = 101;
	strcpy(SM.name, "Omkar");
	SM.salary = 20000;
	SM.target = 100000;
	SM.incentive = 10000;
	display(&SM);
}
void display(SalesManager* ptr)
{
	printf("Employee id: %d\n",ptr -> id);
	printf("Name: %s\n",ptr -> name);
	printf("Salary: %f\n",ptr -> salary);
	printf("Target: %d\n",ptr -> target);
	printf("Incentive: %f\n",ptr -> incentive);
}