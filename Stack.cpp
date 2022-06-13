#include<bits/stdc++.h>
using namespace std;

// template to take any type of data type from user
template <typename T>

// STACKS array 

// Here we have created dynamic array which is 4 size at start and keeps multipling if needed

class stackarr{
	T *data;
	int nextindex;
	int capacity;
	
	public:
		stackarr(){
			capacity = 4;
			data = new T[capacity];
			nextindex = 0;
			
		}
		
		
		// To get the size of stack
		int size(){
			return nextindex;
		}
		
		// To chceck stack is empty or not
		bool isEmpty(){
			return nextindex == 0; // this means return true if nextindex is 0 else return false
		}
		
		// To insert the element
		void push(int element){
			if(capacity == nextindex){
				
				 T *newdata = new T[2*capacity]; // creating new array of double size
				 
				 // copying all old element in new array
				 for(int i=0; i<capacity; i++){
				 	newdata[i] = data[i];
				 }
				 capacity = capacity*2;  // change new size 
				 delete [] data; // Delete old array that is data pointing
				 data = newdata; // now data points to new data array created
			}
			
			data[nextindex] = element;
			nextindex++;
		}
		
		// To delete the element from stack
		void pop(){
			if(isEmpty()){
				cout<<"Stack is empty "<<endl;
			}
			nextindex--;
		}
		
		// To get the top most element in stack
		void top(){
			if(isEmpty()){
				cout<<"Stack is empty "<<endl;
				
			}
			cout<< data[nextindex-1]<<endl;
		}
		
		
		
};


 


int main(){
	
	// array stack which is dyanmic no need of size we can add n number of elements 
	stackarr <int> a;// here that int represent datatype of input
	
	// all its diff func calls
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	a.pop();
	cout<<a.size()<<endl;
	a.top();
	
	a.isEmpty() ? cout<<"true" : cout<<"false"; 

	
}
