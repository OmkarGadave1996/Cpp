// #include<stdio.h>
// #include <cstring>
// struct Employee
// {
// 	int id;
// 	char name[6];
// 	double salary;
// };
// void display(Employee* ptr);
// int main()
// {
// 	Employee E;
// 	E.id = 101;
// 	strcpy(E.name, "Omkar");
// 	E.salary = 20000;
// 	display(&E);
// }
// void display(Employee* ptr)
// {
// 	printf("Employee id: %d\n",ptr -> id);
// 	printf("Name: %s\n",ptr -> name);
// 	printf("Salary: %f\n",ptr -> salary);
// }
#include <iostream>
#include <cstring>
using namespace std;

struct Employee 
{
    int id;
    char name[20]; 
    double salary;
    void setId(int i) 
	{
        id = i;
    }
    void setName(const char* n) 
	{
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
    }
    void setSalary(double s) 
	{
        salary = s;
    }
    int getId()
	{
        return id;
    }
    const char* getName()
	{
        return name;
    }
    double getSalary()
	{
        return salary;
    }
    void display()
	{
        cout << "Employee id: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
    Employee()
    {
        id = 0;
        strcpy(name,"Not given");
        salary = 0;
    }
    Employee(int Emp_id, char* nm, double sa)
    {
        id = Emp_id;
        strcpy(name,nm);
        salary = sa;
    }
};
int main() 
{
    Employee E;
    E.setId(101);
    E.setName("Omkar");
    E.setSalary(20000);
    E.display();
    return 0;
}
