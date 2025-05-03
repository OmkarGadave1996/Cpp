#include<stdio.h>
#include<cstring>
struct Student
{
	int rollno;
	char name[20];
};
void display(Student* ptr);
int main()
{
	Student S;
	S.rollno = 101;
	strcpy(S.name, "Omkar");	
	display(&S);
}
void display(Student* ptr)
{
	printf("Roll No: %d\n",ptr -> rollno);
	printf("Name: %s\n",ptr -> name);
}