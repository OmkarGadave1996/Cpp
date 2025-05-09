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
        strcpy(this->name, n);
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
    virtual void display()
    {
        cout << "\nEmployee id: " << this->id;
        cout << "\nName: " << this->name;
        cout << "\nSalary: " << this->salary;
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
    SalesManager() : Employee()
    {
        this->target = 0;
        this->incentive = 0;
    }
    SalesManager(int Emp_id,const char *nm, double sa, int ta, double in) : Employee(Emp_id, nm, sa)
    {
        this->target = ta;
        this->incentive = in;
    }
    void display() 
    {
        Employee::display();
        cout << "\nTarget: " << this->target;
        cout << "\nIncentive: " << this->incentive;
    }
};//class Sm ends here

struct Admin : public Employee
{
    double allowance;
    void setAllowance(double a) 
	{
        this->allowance = a;
    }
    double getAllowance()
	{
        return this->allowance;
    }
    Admin() : Employee()
    {
        this->allowance = 0;
    }
    Admin(int Emp_id,const char* nm, double sa, double al) : Employee(Emp_id, nm, sa)
    {
        this->allowance = al;
    }
    void display()
	{
        Employee::display();
        cout << "\nAllowance: " << this->allowance << endl;
    }
};//class Admin Ends here

struct HRM : public Employee
{
    double commision;
    void setcommision(double c) 
	{
        this->commision = c;
    }
    double getcommision()
	{
        return this->commision;
    }
    HRM() : Employee()
    {
        this->commision = 0;
    }
    HRM(int Emp_id,const char* nm,double sa,double co) : Employee(Emp_id, nm, sa)
    {
        this->commision = co;
    }
    void display()
	{
        Employee::display();
        cout << "\nCommision: " << this->commision << endl;
    }
};//class HR ends here

int main() 
{
    //Generic pointer
    Employee* Ep;//Employee pointer
    SalesManager Sm(101,"Omkar",20000,100000,10000);
    Ep = &Sm;
    Ep->display();
    printf("\n");

    Admin A(102,"Omkar",20000,10000);
    Ep = &A;
    Ep->display();
    printf("\n");
    
    HRM H(103,"Omkar",20000,10000);
    Ep = &H;
    Ep->display();
    return 0;
}
