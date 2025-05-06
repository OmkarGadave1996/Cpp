#include<stdio.h>
void myfun();
int main()
{
    myfun();
}
void myfun()
{
    int* ptr;
    ptr = new int[50]; //Array
    // ptr = new int(5); integer value
    delete[] ptr;
    //delete ptr; to delete integer value
    //return ptr; become dangling pointer
}