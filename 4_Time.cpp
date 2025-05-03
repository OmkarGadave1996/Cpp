#include<stdio.h>
struct time
{
	int Hr;
	int Min;
	int Sec;
};
void display(time* ptr);
//here in cpp void gives error
int main()
{
	time t1;
	t1.Hr = 10;
	t1.Min = 5;
	t1.Sec = 20;
	display(&t1);
}
void display(time* ptr)
{
	printf("%d Hr : %d Min : %d Sec",ptr -> Hr,ptr -> Min,ptr -> Sec);
}