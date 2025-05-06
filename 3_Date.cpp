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
};
void display(date* ptr) 
{
    cout << ptr->getday() << " day, "
         << ptr->getmonth() << " month, "
         << ptr->getyear() << " year" << endl;
}
int main() 
{
    date d1;
    d1.setday(10);
    d1.setmonth(5);
    d1.setyear(2024);
    display(&d1);
}
