// #include<stdio.h>
// #include <cstring>
// struct Admin
// {
// 	int id;
// 	char name[6];
// 	double salary;
// 	double allowance; 
// };
// void display(Admin* ptr);
// int main()
// {
// 	Admin A;
// 	A.id = 101;
// 	strcpy(A.name, "Omkar");
// 	A.salary = 20000;
// 	A.allowance = 10000;
// 	display(&A);
// }
// void display(Admin* ptr)
// {
// 	printf("Employee id: %d\n",ptr -> id);
// 	printf("Name: %s\n",ptr -> name);
// 	printf("Salary: %f\n",ptr -> salary);
// 	printf("Allowance: %f\n",ptr -> allowance);
// }
#include <iostream>
#include <cstring>
using namespace std;

struct Admin 
{
    int id;
    char name[20]; 
    double salary;
    double allowance;
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
    void setAllowance(double a) 
	{
        allowance = a;
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
    double getAllowance()
	{
        return allowance;
    }
    void display()
	{
        cout << "Employee id: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Allowance: " << getAllowance() << endl;
    }
    Admin()
    {
        id = 0;
        strcpy(name,"Not given");
        salary = 0;
        allowance = 0;
    }
    Admin(int Emp_id, char* nm, double sa, double al)
    {
        id = Emp_id;
        strcpy(name,nm);
        salary = sa;
        allowance = al;
    }
};
int main() 
{
    Admin A;
    A.setId(101);
    A.setName("Omkar");
    A.setSalary(20000);
    A.setAllowance(10000);
    A.display();
    return 0;
}
