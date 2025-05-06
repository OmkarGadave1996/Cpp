// #include<stdio.h>
// #include <cstring>
// struct Distance
// {
// 	int feet;
// 	int inch;
// };
// void display(Distance* ptr);
// int main()
// {
// 	Distance D;
// 	D.feet = 10;
// 	D.inch = 7;
// 	display(&D);
// }
// void display(Distance* ptr)
// {
// 	printf("%d feet, %d inch",ptr -> feet, ptr -> inch);
// }
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    int inch;
    // Setter functions
    void setFeet(int f) 
	{
        feet = f;
    }
    void setInch(int i) 
	{
        inch = i;
    }
    // Getter functions
    int getFeet()
	{
        return feet;
    }
    int getInch()
	{
        return inch;
    }
    // Display function
    void display()
	{
        cout << getFeet() << " feet, " << getInch() << " inch" << endl;
    }
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int fe, int in)
    {
        feet = fe;
        inch = in;
    }
};
int main() {
    Distance D;
    D.setFeet(10);
    D.setInch(7);
    D.display();
    return 0;
}
