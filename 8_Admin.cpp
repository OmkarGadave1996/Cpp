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
    void setAllowance(double a) 
	{
        this->allowance = a;
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
    double getAllowance()
	{
        return this->allowance;
    }
    Admin()
    {
        this->id = 0;
        strcpy(this->name,"Not given");
        this->salary = 0;
        this->allowance = 0;
    }
    Admin(int Emp_id,const char* nm, double sa, double al)
    {
        this->id = Emp_id;
        strcpy(this->name,nm);
        this->salary = sa;
        this->allowance = al;
    }
    void display()
	{
        cout << "Employee id: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
        cout << "Allowance: " << this->allowance << endl;
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
