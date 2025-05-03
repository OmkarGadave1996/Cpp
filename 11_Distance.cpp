#include<stdio.h>
#include <cstring>
struct Distance
{
	int feet;
	int inch;
};
void display(Distance* ptr);
int main()
{
	Distance D;
	D.feet = 10;
	D.inch = 7;
	display(&D);
}
void display(Distance* ptr)
{
	printf("%d feet, %d inch",ptr -> feet, ptr -> inch);
}