#include<stdio.h>
#include <cstring>
struct Complex
{
	int real;
	int imaginary;
};
void display(Complex* ptr);
int main()
{
	Complex c;
	c.real = 10;
	c.imaginary = 20;
	display(&c);
}
void display(Complex* ptr)
{
	printf("%d + %di",ptr -> real, ptr -> imaginary);
}