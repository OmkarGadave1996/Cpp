#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
void display(date* ptr);
//here in cpp void gives error
int main()
{
	date d1;
	d1.day = 10;
	d1.month = 5;
	d1.year = 2024;
	display(&d1);
}
void display(date* ptr)
{
	printf("%d day, %d month, %d year",ptr -> day,ptr -> month,ptr -> year);
}