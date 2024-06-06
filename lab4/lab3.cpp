// 3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the
// data members. Also add the display function. Create Default and Parameterized constructors. Create
// the object of this class in main method and invoke all the methods in that class
#include <iostream>
#include <string.h>

using namespace std;
class book
{
private:
    string bname;
    int id;
    string auther;
    int prize;

public:
    book()
    {
        bname = "abc";
        id = 10;
        auther = "ABC";
        prize = 100;
    }
    book(string bname, int id, string auther, int prize)
    {
        this->bname = bname;
        this->id = id;
        this->auther = auther;
        this->prize = prize;
    }

    void Display()
    {
        cout << "===============Stuedent details========" << endl;
        cout << "Book NAme=" << bname << endl;
        cout << "ID=" << id << endl;
        cout << "Auther=" << auther << endl;
        cout << "prize=" << prize << endl;
    }
    string getBname()
    {
        return bname;
    }
    void setBname(string bname)
    {
        this->bname = bname;
    }
    int getId()
    {
        return id;
    }
    void setId(int id)
    {
        this->id = id;
    }
    string getAuther()
    {
        return auther;
    }
    void setAuther(string auther)
    {
        this->auther = auther;
    }
    int getPrize()
    {
        return prize;
    }
    void setPrize(int prize)
    {
        this->prize = prize;
    }
};
int main()
{
    book b1;
    b1.Display();
    book b2("Apptitude", 101, "R.S.Aggarwal", 1000);
    b2.Display();
    b2.setBname("cpp");
    b2.setId(200);
    b2.setAuther("bjarne straustrap");
    b2.setPrize(2000);
    cout<<"====================setter and getter"<<endl;
    b2.Display();
    return 0;
    }
