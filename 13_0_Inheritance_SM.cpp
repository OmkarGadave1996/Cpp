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
#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    double salary;
    Employee() //Default Constructor Emp
    {
        //printf("\nEmp Default Constructor");
        this->id = 0;
        strcpy(this->name, "Not given");
        this->salary = 0;
    }
    Employee(int Emp_id,const char *nm, double sa)
    {
        //printf("\nEmp Parameterrised Constructor");
        this->id = Emp_id;
        strcpy(this->name, nm);
        this->salary = sa;
    }
    void setId(int i)
    {
        this->id = i;
    }
    void setName(const char* n)
    {
        strcpy(this->name,n);
    }
    void setSalary(int s)
    {
        this->salary = s;
    }
    int getId()
    {
        return this->id;
    }
    char* getName()
    {
        return this->name;
    }
    double getSalary()
    {
        return this->salary;
    }
    void display()
    {
        printf("\nID: %d",this->id);
        printf("\nName of Employee: %s",this->name);    
        printf("\nSalaryof Employee: %.2f",this->salary);
    }
};// class emp ends here

struct SalesManager : public Employee //is-a relation
{
    int target;
    double incentive;
    int getTarget()
    {
        return this->target;
    }
    double getIncentive()
    {
        return this->incentive;
    }
    void setTarget(int t)
    {
        this->target = t;
    }
    void setIncentive(int i)
    {
        this->incentive = i;
    }
    SalesManager() : Employee() //dEFAULT Constructor 
    {
        //printf("\nSM Default Constructor");
        // this->id = 0;
        // strcpy(this->name, "Not given");
        // this->salary = 0;
        this->target = 0;
        this->incentive = 0;
    }
    SalesManager(int Emp_id,const char *nm, double sa, int ta, double in) : Employee(Emp_id, nm, sa)// Parameter Intizlization list
    //parametrized constructor
    {
        //printf("\nSM Parameter Constructor");
        // this->id = Emp_id;
        // strcpy(this->name, nm);
        // this->salary = sa;
        this->target = ta;
        this->incentive = in;
    }
    void display() //this is regular function for this Scope Resolution Operator
    {
        // printf("\nID: %d",this->id);
        // printf("\nName of Employee: %s",this->name);    
        // printf("\nSalaryof Employee: %.2f",this->salary);
        Employee::display();
        printf("\nTarget: %d",this->target);
        printf("\nIncentive: %.2f",this->incentive);
    }
};//class Sm ends here
int main()
{
    SalesManager SM1;
    SM1.setId(102);
    SM1.setName("Omkar");
    SM1.setSalary(20000);
    SM1.setTarget(1200000);
    SM1.setIncentive(20000);
    SM1.display();
    SalesManager SM2(101,"Omkar",20000,100000,10000);
    SM2.display();
    return 0;
}
