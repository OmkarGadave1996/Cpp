#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
    void setday(int d)
	{
        day = d;
    }
    void setmonth(int m) 
	{
        month = m;
    }
    void setyear(int y) 
	{
        year = y;
    }
    int getday() 
	{
        return day;
    }
    int getmonth() 
	{
        return month;
    }
    int getyear() 
	{
        return year;
    }
    date()
    {
        day = 0;
        month = 0;
        year =0;
    }
    date(int da, int mo, int ye)
    {
        day = da;
        month = mo;
        year = ye;
    }
    date operator++(int a)
    {
        date temp;
        temp.day = this->day++; 
        temp.month = this->month++;   
        temp.year = this->year++;  
        return temp;     
    }
    date operator++()
    {
        date temp;
        temp.day = ++this->day; 
        temp.month = ++this->month;   
        temp.year = ++this->year;  
        return temp;  
    }
    void display() 
    {
        cout << getday() << " day, "
        << getmonth() << " month, "
        << getyear() << " year" << endl;
    }
};

int main() 
{
    date d1(10,5,2024);
    date d2, d3;
    d2 = d1++;
    d2.display();
    d1.display();
    d3 = ++d1;
    d3.display();
    d1.display();
}
