// #include<stdio.h>
// struct date
// {
// 	int day;
// 	int month;
// 	int year;
// 	void setday(int d)
// 	{
// 		day = d;
// 	}
// 	void setmonth(int m)
// 	{
// 		month = m;
// 	}
// 	void setyear(int y)
// 	{
// 		year = y;
// 	}
// 	int getday(int dd)
// 	{
// 		return day;
// 	}
// 	int getmonth(int mm)
// 	{
// 		return month;
// 	}
// 	int getyear(int yy)
// 	{
// 		return year;
// 	}
// };
// void display(date* ptr);
// //here in cpp void gives error
// int main()
// {
// 	date d1;
// 	d1.setday(10);
// 	d1.setmonth(5);
// 	d1.setyear(2024);
// 	display(&d1);
// }
// void display(date* ptr)
// {
// 	printf("%d day, %d month, %d year",ptr->getday(),ptr->getmonth(),ptr->getyear());
// }
#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
    void setday(int d)
    {
        this->day = d;
    }
    void setmonth(int m)
    {
        this->month = m;
    }
    void setyear(int y)
    {
        this->year = y;
    }
    int getday()
    {
        return this->day;
    }
    int getmonth()
    {
        return this->month;
    }
    int getyear()
    {
        return this->year;
    }
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int da, int mo, int ye)
    {
        this->day = da;
        this->month = mo;
        this->year = ye;
    }
    void display()
    {
        cout << this->day << " day, "
        << this->month << " month, "
        << this->year << " year" << endl;
    }
};

int main()
{
    date d1;
    d1.setday(10);
    d1.setmonth(5);
    d1.setyear(2024);
    d1.display();
}
