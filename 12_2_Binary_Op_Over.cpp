// #include <iostream>
// using namespace std;

// struct Complex
// {
//     int real;
//     int imaginary;
//     // Setter functions
//     void setReal(int r)
// 	{
//         real = r;
//     }
//     void setImaginary(int i)
// 	{
//         imaginary = i;
//     }
//     // Getter functions
//     int getReal()
// 	{
//         return real;
//     }
//     int getImaginary()
// 	{
//         return imaginary;
//     }
//     // Display function
//     void display()
// 	{
//         cout << getReal() << " + " << getImaginary() << "i" << endl;
//     }
//     Complex()
//     {
//         real = 0;
//         imaginary =0;
//     }
//     Complex(int re, int im)
//     {
//         real = re;
//         imaginary = im;
//     }
//     Complex operator%(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real % C.real;
//         temp.imaginary = this->imaginary % C.imaginary;
//         return temp;
//     }
//     Complex operator>(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real > C.real;
//         temp.imaginary = this->imaginary > C.imaginary;
//         return temp;
//     }
//     Complex operator<(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real < C.real;
//         temp.imaginary = this->imaginary < C.imaginary;
//         return temp;
//     }
//     Complex operator==(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real == C.real;
//         temp.imaginary = this->imaginary == C.imaginary;
//         return temp;
//     }
//     Complex operator<=(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real <= C.real;
//         temp.imaginary = this->imaginary <= C.imaginary;
//         return temp;
//     }
//     Complex operator>(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real >= C.real;
//         temp.imaginary = this->imaginary >= C.imaginary;
//         return temp;
//     }
//     Complex operator!=(Complex C)
//     {
//         Complex temp;
//         temp.real = this->real != C.real;
//         temp.imaginary = this->imaginary != C.imaginary;
//         return temp;
//     }
// };
// int main()
// {
//     Complex c1(10,20);
//     c1.display();
//     Complex c2(5,3);
//     c2.display();
//     Complex c3;
//     c3 = c1 % c2;
//     c3.display();
//     if (c1 > c2)
//     {
//         printf("%d is Greater",c1);
//     }
//     else if(c1 < c2)
//     {
//         printf("%d is Greater",c2);
//     }
//     else if(c1 <= c2)
//     {
//         printf("%d is Greater",c2);
//     }
//     else if(c1 >= c2)
//     {
//         printf("%d is Greater",c2);
//     }
//     else if(c1 == c2)
//     {
//         printf("%d is Greater",c2);
//     }
//     else if(c1 != c2)
//     {
//         printf("%d is Greater",c2);
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int imaginary;

    // Constructors
    Complex() : real(0), imaginary(0) {}
    Complex(int re, int im) : real(re), imaginary(im) {}

    // Setter functions
    void setReal(int r) { real = r; }
    void setImaginary(int i) { imaginary = i; }

    // Getter functions
    int getReal() { return real; }
    int getImaginary() { return imaginary; }

    // Display function
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    // Arithmetic operators
    Complex operator%(Complex C)
    {
        Complex temp;
        temp.real = this->real % C.real;
        temp.imaginary = this->imaginary % C.imaginary;
        return temp;
    }

    // Comparison operators (return bool)
    bool operator>(Complex C)
    {
        return (this->real > C.real && this->imaginary > C.imaginary);
    }

    bool operator<(Complex C)
    {
        return (this->real < C.real && this->imaginary < C.imaginary);
    }

    bool operator==(Complex C)
    {
        return (this->real == C.real && this->imaginary == C.imaginary);
    }

    bool operator<=(Complex C)
    {
        return (this->real <= C.real && this->imaginary <= C.imaginary);
    }

    bool operator>=(Complex C)
    {
        return (this->real >= C.real && this->imaginary >= C.imaginary);
    }

    bool operator!=(Complex C)
    {
        return (this->real != C.real || this->imaginary != C.imaginary);
    }

    // Logical operators (basic examples)
    bool operator!()
    {
        return (real == 0 && imaginary == 0);
    }

    bool operator&&(Complex C)
    {
        return (!(!(*this)) && !(!C)); // true if both are non-zero
    }

    bool operator||(Complex C)
    {
        return (!(!(*this)) || !(!C)); // true if either is non-zero
    }
};

// Global arithmetic operators with int on the left
Complex operator+(int a, Complex C1)
{
    return Complex(a + C1.real, a + C1.imaginary);
}

Complex operator-(int a, Complex C)
{
    return Complex(a - C.real, a - C.imaginary);
}

Complex operator*(int a, Complex C)
{
    return Complex(a * C.real, a * C.imaginary);
}

Complex operator/(int a, Complex C)
{
    return Complex(a / C.real, a / C.imaginary);
}

int main()
{
    Complex c1(10, 20);
    Complex c2(5, 3);

    Complex c3 = c1 % c2;
    c3.display();

    if (c1 > c2)
        cout << "c1 is greater" << endl;
    else if (c1 < c2)
        cout << "c2 is greater" << endl;
    else if (c1 == c2)
        cout << "Both are equal" << endl;
    else if (c1 != c2)
        cout << "They are not equal" << endl;

    cout << "Logical !c1: " << (!c1) << endl;
    cout << "Logical c1 && c2: " << (c1 && c2) << endl;
    cout << "Logical c1 || c2: " << (c1 || c2) << endl;

    return 0;
}
