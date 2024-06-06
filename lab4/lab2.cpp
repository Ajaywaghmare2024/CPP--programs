/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data
members. Also add the display function. Create Default and Parameterized constructors. Create the
object of this class in main method and invoke all the methods in that class. */
#include <iostream>
#include <string>
using namespace std;
class person
{
private:
    string name;
    int age;
    string city;

public:
    person()
    {
        name = "xyz";
        age = 10;
        city = " ";
    }
    person(string name, int age, string city)
    {
        this->name = name;
        this->age = age;
        this->city = city;
    }
    void Display()
    {

        cout << "=================Student details========" << endl;
        cout << "Name=" << name << endl;
        cout << "Age= " << age << endl;
        cout << "city= " << city << endl;
    }

    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }

    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }

    string getCity()
    {
        return city;
    }
    void setCity(string city)
    {
        this->city = city;
    }
};
int main()
{

    person p1;
    p1.Display();
    person p2("Ajay", 23, "solapur");
    p2.Display();
    cout << "==========getter setter method ======" << endl;

    p2.setName("Ram");
    p2.setAge(24);
    p2.setCity("Mohol");

    p2.Display();

    return 0;
}