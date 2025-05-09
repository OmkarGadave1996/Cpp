// #include<stdio.h>
// struct time
// {
// 	int Hr;
// 	int Min;
// 	int Sec;
// };
// void display(time* ptr);
// //here in cpp void gives error
// int main()
// {
// 	time t1;
// 	t1.Hr = 10;
// 	t1.Min = 5;
// 	t1.Sec = 20;
// 	display(&t1);
// }
// void display(time* ptr)
// {
// 	printf("%d Hr : %d Min : %d Sec",ptr -> Hr,ptr -> Min,ptr -> Sec);
// }
#include <iostream>
using namespace std;

struct Time
{
    int Hr;
    int Min;
    int Sec;
    // Setter functions
    void setHr(int h)
    {
        this->Hr = h;
    }
    void setMin(int m)
    {
        this->Min = m;
    }
    void setSec(int s)
    {
        this->Sec = s;
    }
    // Getter functions
    int getHr()
    {
        return this->Hr;
    }
    int getMin()
    {
        return this->Min;
    }
    int getSec()this->
    {
        return this->Sec;
    }
    Time()
    {
        this->Hr = 0;
        this->Min = 0;
        this->Sec = 0;
    }
    Time(int ho, int mn, int sc)
    {
        this->Hr = ho;
        this->Min = mn;
        this->Sec = sc;
    }
    // Display function
    void display()
    {
        cout << this->Hr << " Hr : "
        << this->Min << " Min :  "
        << this->Sec << " Sec : " << endl;
    }
};

int main()
{
    Time t1; // Declare an instance of the Time struct
    t1.setHr(10);
    t1.setMin(5);
    t1.setSec(20);
    t1.display();
    return 0;
}
