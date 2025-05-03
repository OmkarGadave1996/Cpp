#include<stdio.h>
#include <cstring>
struct Admin
{
	int id;
	char name[6];
	double salary;
	double allowance; 
};
void display(Admin* ptr);
int main()
{
	Admin A;
	A.id = 101;
	strcpy(A.name, "Omkar");
	A.salary = 20000;
	A.allowance = 10000;
	display(&A);
}
void display(Admin* ptr)
{
	printf("Employee id: %d\n",ptr -> id);
	printf("Name: %s\n",ptr -> name);
	printf("Salary: %f\n",ptr -> salary);
	printf("Allowance: %f\n",ptr -> allowance);
}