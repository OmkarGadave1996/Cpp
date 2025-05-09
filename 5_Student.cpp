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
        this->rollno = roll;
    }

    void setName(const char* n)  // Use const char* to match string literals
    {
        strncpy(this->name, n);
    }

    int getRollNo() 
    {
        return this->rollno;
    }

    const char* getName()  // Return const char* to avoid potential modification of name
    {
        return this->name;
    }
    Student()
    {
        this->rollno = 0;
        strcpy(this->name,"Not Given");
    }
    Student(int r, char* nm)
    {
        this->rollno = r;
        strcpy(this->name,nm);
    }       
    void display()
    {
        cout << "Roll No: " << this->rollno;
        cout << "Name: " << this->name;
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
