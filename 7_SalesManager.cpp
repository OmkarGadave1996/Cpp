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
    void setId(int i) {
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
    void setTarget(int t)
	{
        target = t;
    }
    void setIncentive(double inc)
	{
        incentive = inc;
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
    int getTarget()
	{
        return target;
    }
    double getIncentive()
	{
        return incentive;
    }
    void display()
	{
        cout << "Employee id: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Target: " << getTarget() << endl;
        cout << "Incentive: " << getIncentive() << endl;
    }
    SalesManager()
    {
        id = 0;
        strcpy(name,"Not given");
        salary = 0;
        target = 0;
        incentive = 0;
    }
    SalesManager(int Emp_id, char* nm, double sa, int ta, double in)
    {
        id = Emp_id;
        strcpy(name,nm);
        salary = sa;
        target = ta;
        incentive = in;
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
