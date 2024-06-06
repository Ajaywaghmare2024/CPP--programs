// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members.
// Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.
#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        day = 2;
        month = 2;
        year = 2000;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void Display()
    {
        cout << "========================Date details==========" << endl;
        cout << "Day=" << day << endl;
        cout << "Months=" << month << endl;
        cout << "Year=" << year << endl;
    }

    int setDay()
    {
        return day;
    }
    void setDay(int day)
    {
        this->day = day;
    }

    int setMonth()
    {
        return month;
    }
    void setMonth(int month)
    {
        this->month = month;
    }

    int setYear()
    {
        return year;
    }
    void setyear(int year)
    {
        this->year = year;
    }
};
int main()
{
    Date d1;
    d1.Display();
    Date d2;
    d2.setDay(29);
    d2.setMonth(11);
    d2.setyear(2001);
    cout << "==================getter setter==========" << endl;
    d2.Display();
    return 0;
}