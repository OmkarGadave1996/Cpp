#include<stdio.h>
#include <cstring>
struct Employee
{
	int id;
	char name[6];
	double salary;
};
void display(Employee* ptr);
int main()
{
	Employee E;
	E.id = 101;
	strcpy(E.name, "Omkar");
	E.salary = 20000;
	display(&E);
}
void display(Employee* ptr)
{
	printf("Employee id: %d\n",ptr -> id);
	printf("Name: %s\n",ptr -> name);
	printf("Salary: %f\n",ptr -> salary);
}