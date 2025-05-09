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
        this->id = i;
    }
    void setName(const char* n) 
	{
        strncpy(this->name, n);
    }
    void setSalary(double s) 
	{
        this->salary = s;
    }
    int getId()
	{
        return this->id;
    }
    const char* getName()
	{
        return this->name;
    }
    double getSalary()
	{
        return this->salary;
    }
    Employee()
    {
        this->id = 0;
        strcpy(this->name,"Not given");
        this->salary = 0;
    }
    Employee(int Emp_id, char* nm, double sa)
    {
        this->id = Emp_id;
        strcpy(this->name,nm);
        this->salary = sa;
    }
    void display()
	{
        cout << "Employee id: " << this->id;
        cout << "Name: " << this->name;
        cout << "Salary: " << this->salary;
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
