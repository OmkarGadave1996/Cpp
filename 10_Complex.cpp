// #include<stdio.h>
// #include <cstring>
// struct Complex
// {
// 	int real;
// 	int imaginary;
// };
// void display(Complex* ptr);
// int main()
// {
// 	Complex c;
// 	c.real = 10;
// 	c.imaginary = 20;
// 	display(&c);
// }
// void display(Complex* ptr)
// {
// 	printf("%d + %di",ptr -> real, ptr -> imaginary);
// }
#include <iostream>
using namespace std;

struct Complex 
{
    int real;
    int imaginary;
    // Setter functions
    void setReal(int r) 
	{
        this->real = r;
    }
    void setImaginary(int i) 
	{
        this->imaginary = i;
    }
    // Getter functions
    int getReal()
	{
        return this->real;
    }
    int getImaginary()
	{
        return this->imaginary;
    }
    Complex()
    {
        this->real = 0;
        this->imaginary =0;
    }
    Complex(int re, int im)
    {
        this->real = re;
        this->imaginary = im;
    }
    // Display function
    void display() 
	{
        cout << this->real << " + " << this->imaginary << "i" << endl;
    }
};
int main() 
{
    Complex c;
    c.setReal(10);
    c.setImaginary(20);
    c.display();
    return 0;
}
