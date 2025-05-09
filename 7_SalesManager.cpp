// #include<stdio.h>
// #include <cstring>
// struct SalesManager
// {
// 	int id;
// 	char name[6];
// 	double salary;
// 	int target;
// 	double incentive; 
// };
// void display(SalesManager* ptr);
// int main()
// {
// 	SalesManager SM;
// 	SM.id = 101;
// 	strcpy(SM.name, "Omkar");
// 	SM.salary = 20000;
// 	SM.target = 100000;
// 	SM.incentive = 10000;
// 	display(&SM);
// }
// void display(SalesManager* ptr)
// {
// 	printf("Employee id: %d\n",ptr -> id);
// 	printf("Name: %s\n",ptr -> name);
// 	printf("Salary: %f\n",ptr -> salary);
// 	printf("Target: %d\n",ptr -> target);
// 	printf("Incentive: %f\n",ptr -> incentive);
// }
#include <iostream>
#include <cstring>
using namespace std;

struct SalesManager 
{
    int id;
    char name[20]; 
    double salary;
    int target;
    double incentive;
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
    void setTarget(int t)
	{
        this->target = t;
    }
    void setIncentive(double inc)
	{
        this->incentive = inc;
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
    int getTarget()
	{
        return this->target;
    }
    double getIncentive()
	{
        return this->incentive;
    }

    SalesManager()
    {
        this->id = 0;
        strcpy(this->name,"Not given");
        this->salary = 0;
        this->target = 0;
        this->incentive = 0;
    }
    SalesManager(int Emp_id, char* nm, double sa, int ta, double in)
    {
        this->id = Emp_id;
        strcpy(this->name,nm);
        this->salary = sa;
        this->target = ta;
        this->incentive = in;
    }
    void display()
	{
        cout << "Employee id: " << this->id;
        cout << "Name: " << this->name;
        cout << "Salary: " << this->salary;
        cout << "Target: " << this->target;
        cout << "Incentive: " << this->incentive;
    }
};
int main()
{
    SalesManager SM;
    SM.setId(101);
    SM.setName("Omkar");
    SM.setSalary(20000);
    SM.setTarget(100000);
    SM.setIncentive(10000);
    SM.display();
    return 0;
}
