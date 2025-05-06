#include<stdio.h>
int main()
{
    int a= 10;
    int& b = a;
    b = 30;
    printf("%d",a);
}