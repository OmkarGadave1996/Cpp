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
        real = r;
    }
    void setImaginary(int i) 
	{
        imaginary = i;
    }
    // Getter functions
    int getReal()
	{
        return real;
    }
    int getImaginary()
	{
        return imaginary;
    }
    // Display function
    void display() 
	{
        cout << getReal() << " + " << getImaginary() << "i" << endl;
    }
    Complex()
    {
        real = 0;
        imaginary =0;
    }
    Complex(int re, int im)
    {
        real = re;
        imaginary = im;
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
