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
    Complex operator++(int a)
    {
        Complex temp;
        temp.real = this->real++;
        temp.imaginary = this->imaginary++;
        return temp;
    }
    Complex operator++()
    {
        Complex temp;
        temp.real = ++this->real;
        temp.imaginary = ++this->imaginary;
        return temp;
    }
};
int main()
{
    Complex c1(10,20);
    c1.display();
    Complex c2, c3;
    c2 = c1++;
    c2.display();
    c1.display();
    c3 = ++c1;
    c3.display();
    c1.display();
    return 0;
}
