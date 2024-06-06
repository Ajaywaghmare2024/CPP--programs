// 5. Create a class ComplexNumber with data members real, imaginary. Create
// Default and Parameterized constructors. Write getters and setters for all the data
// members. Also add the display function. Create the object of this class in main
// method and invoke all the methods in that class.
#include <iostream>
using namespace std;
class ComplexNumber
{
private:
    int real;
    int imag;

public:
    ComplexNumber()
    {
        real = 1;
        imag = 1;
    }
    ComplexNumber(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << "Real no=" << real << endl;
        cout << "imaginary no=" << imag << endl;
        cout << real << "+" << imag << "i" << endl;
    }
    int getReal()
    {
        return real;
    }
    void setReal(int real)
    {
        this->real = real;
    }
    int getImag()
    {
        return imag;
    }
    void setImag(int imag)
    {
        this->imag = imag;
    }
};
int main()
{
    ComplexNumber c1;
    c1.display();
    ComplexNumber c2(2, 3);
    c2.display();
    cout << "=======Getter and setter====" << endl;
    c2.setReal(5);
    c2.setImag(4);
    c2.display();
    return 0;
}