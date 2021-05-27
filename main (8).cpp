#include<iostream>
using namespace std;
class student
{
	int roll_no;
	int yearofjoining ;
	int CGPA;
	public:
student(int a,int b,int c)
{
	roll_no=a;
	yearofjoining=b;
	CGPA=c;
}
student(int a,int b)
{
	roll_no=a;
	yearofjoining=b;
	CGPA=0;
 } 
void display()
{
	cout<<"the roll_no of student is "<<roll_no<<endl;
	cout<<"the yearof joining of student is "<<yearofjoining<<endl;
	cout<<"the overall CGPA of student is "<<CGPA<<endl;
}
};
int main()
{
	student s1(191944,2019,9);
	s1.display();
	student s2(191926,2019);
	s2.display();
	return 0;
}