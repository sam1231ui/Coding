#include<bits/stdc++.h>
using namespace std;

// Polymorphism


// Function overloading
class Geeks{
    public:
      
      int add(int a, int b){
      	return a+b;
	  }
	  int add(double a, double b){
	  	return a+b;
	  }
};
  
// Operator overloading
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}
       
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};
  
  
int main() {
      
    Geeks obj1;
      
    // Which function is called will depend on the parameters passed
    // The first 'func' is called 
    obj1.add(7,11);
      
    // The second 'func' is called
    obj1.add(9.132,6.2);
    
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
      

}
