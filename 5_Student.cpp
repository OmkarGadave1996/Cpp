// #include<stdio.h>
// #include<cstring>
// struct Student
// {
// 	int rollno;
// 	char name[20];
// };
// void display(Student* ptr);
// int main()
// {
// 	Student S;
// 	S.rollno = 101;
// 	strcpy(S.name, "Omkar");
// 	display(&S);
// }
// void display(Student* ptr)
// {
// 	printf("Roll No: %d\n",ptr -> rollno);
// 	printf("Name: %s\n",ptr -> name);
// }
#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int rollno;
    char name[20];

    void setRollNo(int roll)
    {
        rollno = roll;
    }

    void setName(const char* n)  // Use const char* to match string literals
    {
        // Use strncpy to safely copy the string and ensure null-termination
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';  // Ensure null-termination
    }

    int getRollNo() 
    {
        return rollno;
    }

    const char* getName()  // Return const char* to avoid potential modification of name
    {
        return name;
    }

    void display()
    {
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Name: " << getName() << endl;
    }

    Student()
    {
        rollno = 0;
        strcpy(name,"Not Given");
    }
};

int main()
{   
    Student S1;
    S1.display();
    Student S;
    S.setRollNo(101);
    S.setName("Omkar");
    S.display();
    return 0;
}
