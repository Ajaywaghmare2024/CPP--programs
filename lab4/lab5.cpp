// 4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write
// getters and setters for all the data members. Also add the display function. Create the object of this
// class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;
class point
{
private:
    int x;
    int y;

public:
    point()
    {
        x = 0;
        y = 0;
    }
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << "X=" << x << endl;
        cout << "Y=" << y << endl;
    }
    int getX()
    {
        return x;
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getY()
    {
        return y;
    }
    void setY(int y)
    {
        this->y = y;
    }
};
int main()
{
    point p1;
    p1.display();
    point p2;
    p2.setX(10);
    p2.setY(20);
    cout << "==========================point details ======" << endl;
    p2.display();
    return 0;
}