////POINTERS

#include <bits/stdc++.h>
using namespace std;

//Simple how to make pointer.
void point(){
	int var = 20;
	int *ptr = &var;
	
	cout<<"add = "<<ptr<<endl; // will give address of ptr that is of var.
	cout<<"value= "<<*ptr<<endl; // or here we can use 'var' too. 
	cout<<"This will print then increment "<<(var++)<<endl; // this will print value as 20 then increment it to 21.
	cout<<"This will increment then print "<<++(*ptr)<<endl; // this will 1st perform increment then prints the value that is 22.
	
}

//Array in pointer.
void pointarr(){
	int arr[]={10,20,30,40};
	
	int *ptr = &arr[0]; //Give '*ptr' 0th elent address.
	cout<<ptr[0]<<" "<<ptr[1]; // and soo on.
}

//String in pointer.
void pointstr(){
	string str="string";
	const char*ptr = "stringe";
	cout<<str;
}


int main(){
	point();
	pointarr();
	pointstr();
}
