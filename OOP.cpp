#include<bits/stdc++.h>
using namespace std;

//  Constructors type
class student{
	public:
		int roll;
		int age;
		
};

//user defined Constructors
class add{
	int a,b;
	public:
		add(){
			a=10,b=20;
		}
		int sum(){
			return a+b;
		}
};

// Parameterized const
class multi{
	int a, b;
	public:
		multi(int i, int j){
			a = i;
			b = j;
		}
		int getmulti(){
			return a*b;
		} 
	
};

// OOP CONCEPTS - Encapsulation, Abstraction, 
class oop{
	// class Members 
	int x;
	int y;
	
	public: // Access modifier
		
		
		// Encapsulation and getter, setter
		void set(int a,int b){
			x=a;
			y=b;
		}
		int get(){
			return x,y;
		}
		
		// Abstraction 
		void display(){
			cout<<x<<" "<<y<<endl;
		}
};


// Inheritance and its type // 

// MULTILEVEL inheritance

// Base class
class vehicle{
	public:
		string brand = "Ford";
		void sound(){
			cout<<"tutuu";
		}
};
// Derived class
class car: public vehicle{
	public:
		string model = "mustang";
};
// 2nd derived 
class fourwheel: public car{
	public:
		void dis(){
			cout<<"this is example of multilevel inheritance."<<endl;
		}
};

// MULTIPLE inheritance 
class bike : public car, public vehicle{
	public:
		void disp(){
			cout<<"this is example of multiple inheritance."<<endl;
		}
};

// HIERARCHICAL inheritance              
class cycle: public vehicle{               
};
class cycle2: public vehicle{
};
class cycle3 : public cycle2{
};

// HYBRIDE inheritance
class d: public vehicle, public student{
};


int main(){
	
	
	// Static allocation of data type student or class student object
	student s;
	
	cin>>s.roll>>s.age;
	cout<<s.roll<<" "<<s.age<<endl;
	
	
	//Dyanic allocation of same
	student *s2 = new student;
	s2 -> roll = 32;
	s2 -> age = 18;
	
	cout<<s2 -> roll<<' '<<s2 -> age<<endl;
	
	delete s2;
	
	
	// user defined constructor
	add a1;
	cout<<a1.sum()<<endl;
	// parameter consturctor 
	multi m1(2,3);
	cout<<m1.getmulti();
	
	// object of class oop
	oop p1;
	
	// Inheritance obj
	car mycar;
	
	mycar.sound();
 
}

