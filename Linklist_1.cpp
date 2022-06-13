#include<bits/stdc++.h>
using namespace std;

// Linklist


// user defined data type for linklist
class node{
	public: 
		int data;
		node *next;
	
	node(int data){
		this -> data = data;
		next = NULL;
	}  
	
};

//function to print the linklist
void printlist(node *head){
	
	node *temp = head;
	
	while(temp != NULL){
		
		cout << temp -> data<<" ";
		temp = temp -> next;
	}cout<<endl;
}


int main(){
	
	// static allocation 
	node n1(10);
	node *head = &n1;
	
	node n2(20);
	n1.next = &n2;
	
	node n3(30);
	n2.next = &n3;
	
	node n4(40);
	n3.next = &n4;
	
	cout<<"This is static : ";
	printlist(head);
	
	// Dynamic allocation
	node *d1 = new node(1);
	node *d2 = new node(2);
	node *d3 = new node(3);
	
	node *head2 = d1; 
	d1 -> next = d2;
	d2 -> next = d3;
	
	cout<<"This is Dynamic: ";
	printlist(head2);
	
	
	
}
