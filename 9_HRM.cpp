#include<stdio.h>
#include <cstring>
struct HRM
{
	int id;
	char name[6];
	double salary;
	double commision; 
};
void display(HRM* ptr);
int main()
{
	HRM H;
	H.id = 101;
	strcpy(H.name, "Omkar");
	H.salary = 20000;
	H.commision = 10000;
	display(&H);
}
void display(HRM* ptr)
{
	printf("Employee id: %d\n",ptr -> id);
	printf("Name: %s\n",ptr -> name);
	printf("Salary: %f\n",ptr -> salary);
	printf("Commision: %f\n",ptr -> commision);
}