//Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived
// classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties 
// and methods related to their respective categories of animals.


#include <iostream>
#include <string>
using namespace std;


class Animal{
	protected:
	string name;
	int age;
	
	public:
		Animal(){
			name="no name";
			age = 0;
		}
		
		Animal(string name, int age){

            this->name =name;
			this-> age =age;			
		}
	virtual void display(){
		cout <<"name of Animal is: "<<name<<endl;
		cout << "age of animal is: "<<age<<endl;
		
		
	}
	virtual void move(){
		cout <<"Animal Can Move"<<endl;
		
	}
	
};

class Mammal:virtual public Animal{
	protected:
	int no_of_legs;
	public:
	Mammal(){
		cout<<"default mammal"<<endl;
		
		no_of_legs =2;
	}
	
	Mammal(string name,int age,int no_of_legs): Animal(name,age){
		this->no_of_legs=no_of_legs;
	}
	
	void display(){
		Animal::display();
		cout<< "number of legs: "<<no_of_legs<<endl;
	}
	void move(){
		Animal::move();
		cout <<"Mammals can walk as well as run " <<endl;
	}
};

class Bird:virtual public Animal{
	protected : int wings ;
	public :
	Bird(){
	int wings;	
	}
	Bird(string name,int age,int wings):Animal(name,age){
		this->wings=wings;
	}
	void display(){
		Animal::display();
		cout <<"no. of wings"<<wings<<endl;
	}
	
	void move(){
	Animal::move();
	cout<<"Birds can run,walk as well as fly"<<endl;
	
	}
	
};
int main1(){
//	Mammal m;
//	m.display();
	
	Mammal m1("human",25,2);
	m1.display();
	m1.move();
	Bird b1("kingfisher",2,2);
	b1.display();
	b1.move();
	return 0;
}

