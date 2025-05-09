// #include<stdio.h>
// #include <cstring>
// struct HRM
// {
// 	int id;
// 	char name[6];
// 	double salary;
// 	double commision; 
// };
// void display(HRM* ptr);
// int main()
// {
// 	HRM H;
// 	H.id = 101;
// 	strcpy(H.name, "Omkar");
// 	H.salary = 20000;
// 	H.commision = 10000;
// 	display(&H);
// }
// void display(HRM* ptr)
// {
// 	printf("Employee id: %d\n",ptr -> id);
// 	printf("Name: %s\n",ptr -> name);
// 	printf("Salary: %f\n",ptr -> salary);
// 	printf("Commision: %f\n",ptr -> commision);
// }
#include <iostream>
#include <cstring>
using namespace std;

struct HRM 
{
    int id;
    char name[20]; 
    double salary;
    double commision;
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
    void setcommision(double c) 
	{
        this->commision = c;
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
    double getcommision()
	{
        return this->commision;
    }
    HRM()
    {
        this->id = 0;
        strcpy(this->name,"Not given");
        this->salary = 0;
        this->commision = 0;
    }
    HRM(int Emp_id,const char* nm,double sa,double co)
    {
        this->id = Emp_id;
        strcpy(this->name,nm);
        this->salary = sa;
        this->commision = co;
    }
    void display()
	{
        cout << "Employee id: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
        cout << "Commision: " << this->commision << endl;
    }
};
int main() 
{
    HRM H;
    H.setId(101);
    H.setName("Omkar");
    H.setSalary(20000);
    H.setcommision(10000);
    H.display();
    return 0;
}