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
        this->feet = f;
    }
    void setInch(int i) 
	{
        this->inch = i;
    }
    // Getter functions
    int getFeet()
	{
        return this->feet;
    }
    int getInch()
	{
        return this->inch;
    }
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }
    Distance(int fe, int in)
    {
        this->feet = fe;
        this->inch = in;
    }
    // Display function
    void display()
	{
        cout << this->feet << " feet, " << this->inch << " inch" << endl;
    }
};
int main() {
    Distance D;
    D.setFeet(10);
    D.setInch(7);
    D.display();
    return 0;
}
