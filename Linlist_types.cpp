#include<bits/stdc++.h>
using namespace std;

// TYPES of Linklist

// circular linklist
class node{
	public:
		int data;
		node *next;
		
		node(int data){
			this -> data = data;
			next = NULL;
		}
};

//user defined input to circular linklist
node *takeinput(){
	
	int input;
	cin>>input;
	
	node *head = NULL, *tail = NULL;
	
	while(input != -1){
		
		node *n = new node(input);
		
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			
			tail -> next = n;
			tail = n;
		}
		 // This steps makes circular linklist as tail is linked to head at last
		tail ->next = head;
		cin>>input;
	}
	return head;
}


// DOUBLE linklist
class dnode{
	public:
		dnode *prev;
		int data;
		dnode *next;
		
		dnode(int data){
			prev = NULL;
			this -> data = data;
			next = NULL;
	}
};	

dnode *dinput(){
	
	int input;
	cin>>input;
	
	dnode *head = NULL, *tail = NULL;
	
	while(input != -1){
		
		dnode *n = new dnode(input);
		
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			n -> prev = tail;
			tail -> next = n;
			tail = n;
		}
		cin>>input;
	}return head;
}





// print circular linklist fun
void print(node *head){
	node *temp = head;
	while(temp -> next != head){
		cout<<temp -> data<<' ';
		temp = temp -> next;
	}cout<<temp -> data<<endl;
}

// Dlouble linklist print call
void dprint(dnode *head){
	
	dnode *temp = head;
	while(temp != head){
		
		cout<<temp -> data<<' ';
	}cout<<endl;
}




int main(){
	
	node *s1 = takeinput(); // call for circular linklist
	print(s1);
	
	
	dnode *s2 = dinput(); // call for double linklist
	cout<<s2 -> prev -> data;
	
	
}

