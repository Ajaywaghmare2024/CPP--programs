// 1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.

#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;
    double m1, m2, m3;
    double total;
    double per;
    char grade;

    void caltotal(){
        total=m1+m2+m3;
        cout<<"===total==="<<total<<endl;

    }
    void calPer()
    {
        per=(total/300)*100;
        cout<<"Percentage= "<<per<<endl;

    }
    void calGrade()
    {
        if(per>=80)
        {
            cout<<"Grade==A"<<endl;
        }
        else if(per>=70 && per<=80)
        {
            cout<<"Grade==B"<<endl;
        }
        else if(per>=60 && per<=70)
        {
            cout<<"Grade==c"<<endl;
        }
        else
        {
            cout<<"Only participate;\n";
        }
    }

public:
    void acceptInfo(int rollNo, double m1, double m2, double m3)
    {
        cout << "---------Accept info-----" << endl;
        this->rollNo = rollNo;
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    void Display()
    {
        cout << "-------student details------" << endl;
        cout << "RollNo=" << rollNo << endl;
        cout << "marks1=" << m1 << endl;
        cout << "marks2=" << m2 << endl;
        cout << "marks3=" << m3 << endl;
        caltotal();
        calPer();
        calGrade();
    }
};
int main()
{
    student s1;
    s1.acceptInfo(10, 50, 60, 80);
    s1.Display();
    return 0;
}