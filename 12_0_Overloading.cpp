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
    Complex add(Complex C)
    {
        Complex temp;
        temp.real = this->real + C.real; 
        temp.imaginary = this->imaginary + C.imaginary;   
        return temp;     
    }
    Complex add(int a)
    {
        Complex temp;
        temp.real = this->real + a; 
        temp.imaginary = this->imaginary + a;   
        return temp; 
    }
    Complex sub(Complex C)
    {
        Complex temp;
        temp.real = this->real - C.real; 
        temp.imaginary = this->imaginary - C.imaginary;   
        return temp;     
    }
    Complex sub(int a)
    {
        Complex temp;
        temp.real = this->real - a; 
        temp.imaginary = this->imaginary - a;   
        return temp; 
    }
    Complex mul(Complex C)
    {
        Complex temp;
        temp.real = this->real * C.real; 
        temp.imaginary = this->imaginary * C.imaginary;   
        return temp;     
    }
    Complex mul(int a)
    {
        Complex temp;
        temp.real = this->real * a; 
        temp.imaginary = this->imaginary * a;   
        return temp; 
    }
    Complex dev(Complex C)
    {
        Complex temp;
        temp.real = this->real / C.real; 
        temp.imaginary = this->imaginary / C.imaginary;   
        return temp;     
    }
    Complex dev(int a)
    {
        Complex temp;
        temp.real = this->real / a; 
        temp.imaginary = this->imaginary / a;   
        return temp; 
    }
};
Complex add(int, Complex);
Complex sub(int, Complex);
Complex mul(int, Complex);
Complex dev(int, Complex);
int main() 
{
    Complex c1(10,20);
    c1.display();
    Complex c2(5,3);
    c2.display();
    Complex c3;
    c3 = c1.add(c2);
    c3.display();
    Complex c4;
    c4 = c1.add(10);
    c4.display();
    Complex c5;
    c5 = add(10,c1);
    c5.display();
    Complex c6;
    c6 = c1.sub(c2);
    c6.display();
    Complex c7;
    c7 = c1.sub(10);
    c7.display();
    Complex c8;
    c8 = sub(10,c1);
    c8.display();
    Complex c9;
    c9 = c1.mul(c2);
    c9.display();
    Complex c10;
    c10 = c1.mul(10);
    c10.display();
    Complex c11;
    c11 = mul(10,c1);
    c11.display();
    Complex c12;
    c12 = c1.dev(c2);
    c12.display();
    Complex c13;
    c13 = c1.dev(10);
    c13.display();
    Complex c14;
    c14 = dev(10,c1);
    c14.display();
    return 0;
}
Complex add(int a, Complex C)
{
    Complex temp;
    temp.real = a + C.real; 
    temp.imaginary = a + C.imaginary;   
    return temp; 
}
Complex sub(int a, Complex C)
{
    Complex temp;
    temp.real = a - C.real; 
    temp.imaginary = a - C.imaginary;   
    return temp; 
}
Complex mul(int a, Complex C)
{
    Complex temp;
    temp.real = a * C.real; 
    temp.imaginary = a * C.imaginary;   
    return temp; 
}
Complex dev(int a, Complex C)
{
    Complex temp;
    temp.real = a / C.real; 
    temp.imaginary = a / C.imaginary;   
    return temp; 
}
//For Class 
// Complex add(int a, Complex C)
// {
//     Complex temp;
//     int r, i;
//     r = a + C.getReal();
//     temp.setImaginary(r);
//     i = a + C.getImaginary();
//     temp.setImaginary(i);
//     return temp; 
// }