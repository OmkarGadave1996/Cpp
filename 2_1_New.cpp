#include<stdio.h>
int main()
{
    int* ptr;
    int n = 5;
    ptr = new int[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Array Values: \n");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Array Value at %d index: %d\n", i,ptr[i]);
    }
}