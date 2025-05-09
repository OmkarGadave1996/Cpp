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
    Distance operator+(Distance D)
    {
        Distance temp;
        temp.feet = this->feet + D.feet;
        temp.inch = this->inch + D.inch;
        return temp;
    }
    Distance operator-(Distance D)
    {
        Distance temp;
        temp.feet = this->feet - D.feet;
        temp.inch = this->inch - D.inch;
        return temp;
    }
    Distance operator*(Distance D)
    {
        Distance temp;
        temp.feet = this->feet * D.feet;
        temp.inch = this->inch * D.inch;
        return temp;
    }
    Distance operator/(Distance D)
    {
        Distance temp;
        temp.feet = this->feet / D.feet;
        temp.inch = this->inch / D.inch;
        return temp;
    }
    Distance operator%(Distance D)
    {
        Distance temp;
        temp.feet = this->feet % D.feet;
        temp.inch = this->inch % D.inch;
        return temp;
    }
    // Comparison operators (return bool)
    bool operator>(Distance D)
    {
        return (this->feet > D.feet && this->inch > D.inch);
    }

    bool operator<(Distance D)
    {
        return (this->feet < D.feet && this->inch < D.inch);
    }

    bool operator==(Distance D)
    {
        return (this->feet == D.feet && this->inch == D.inch);
    }

    bool operator<=(Distance D)
    {
        return (this->feet <= D.feet && this->inch <= D.inch);
    }

    bool operator>=(Distance D)
    {
        return (this->feet >= D.feet && this->inch >= D.inch);
    }

    bool operator!=(Distance D)
    {
        return (this->feet != D.feet || this->inch != D.inch);
    }

    // Logical operators (basic examples)
    bool operator!()
    {
        return (feet == 0 && inch == 0);
    }

    bool operator&&(Distance D)
    {
        return (!(!(*this)) && !(!D)); // true if both are non-zero
    }

    bool operator||(Distance D)
    {
        return (!(!(*this)) || !(!D)); // true if either is non-zero
    }
    //Uniary Operator
    Distance operator++(int a)
    {
        Distance temp;
        temp.feet = this->feet++;
        temp.inch = this->inch++;
        return temp;
    }
    Distance operator++()
    {
        Distance temp;
        temp.feet = ++this->feet;
        temp.inch = ++this->inch;
        return temp;
    }
};
int main()
{
    Distance D1(10, 7), D2(5, 4), D3, D4, D5, D6,D7,D8;
    D1.display();
    D2.display();
    D3 = D1 + D2;
    D3.display();
    D4 = D1 - D2;
    D4.display();
    D5 = D1 * D2;
    D5.display();
    D6 = D1 / D2;
    D6.display();
    D7 = D1++;
    D7.display();
    D1.display();   
    D8 = ++D1;
    D8.display();
    D1.display();
    if (D1 > D2)
        cout << "D1 is greater" << endl;
    else if (D1 < D2)
        cout << "D2 is greater" << endl;
    else if (D1 == D2)
        cout << "Both are equal" << endl;
    else if (D1 != D2)
        cout << "They are not equal" << endl;

    cout << "Logical !D1: " << (!D1) << endl;
    cout << "Logical D1 && D2: " << (D1 && D2) << endl;
    cout << "Logical D1 || D2: " << (D1 || D2) << endl;
    return 0;
}
