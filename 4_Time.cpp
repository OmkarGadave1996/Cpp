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
        Hr = h;
    }
    void setMin(int m)
    {
        Min = m;
    }
    void setSec(int s)
    {
        Sec = s;
    }
    // Getter functions
    int getHr()
    {
        return Hr;
    }
    int getMin()
    {
        return Min;
    }
    int getSec()
    {
        return Sec;
    }
    Time()
    {
        Hr = 0;
        Min = 0;
        Sec = 0;
    }
    Time(int ho, int mn, int sc)
    {
        Hr = ho;
        Min = mn;
        Sec = sc;
    }
};
// Display function
void display(Time *ptr)
{
    cout << ptr->getHr() << " Hr : "
         << ptr->getMin() << " Min :  "
         << ptr->getSec() << " Sec : " << endl;
}
int main()
{
    Time t1; // Declare an instance of the Time struct
    t1.setHr(10);
    t1.setMin(5);
    t1.setSec(20);
    display(&t1);
    return 0;
}
