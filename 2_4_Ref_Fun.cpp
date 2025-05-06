#include<stdio.h>
void myfun(int&);
int main()
{
    int a = 10;
    int& b = a;
    myfun();
    printf("%d",a);
}
void myfun(int& b)
{
    b = 30;
}