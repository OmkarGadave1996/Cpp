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
    void setcommision(double c) 
	{
        commision = c;
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
    double getcommision()
	{
        return commision;
    }
    void display()
	{
        cout << "Employee id: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Commision: " << getcommision() << endl;
    }
    HRM()
    {
        id = 0;
        strcpy(name,"Not given");
        salary = 0;
        commision = 0;
    }
    HRM(int Emp_id,char* nm,double sa,double co)
    {
        id = Emp_id;
        strcpy(name,nm);
        salary = sa;
        commision = co;
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