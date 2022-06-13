#include<bits/stdc++.h>
using namespace std;

// Node datatype created
class node{
	public:
		int data;
		node *next;
		
		//constructor to get data from user
		node(int data){
			this -> data = data;
			next = NULL;
		}
};

node *takeinput(){
	
	// Taking input from user saving it in input
	int input;
	cin>>input;
	
	// head is created to store 1st node of the link
	node *head = NULL, *tail = NULL;
	
	// This loop is to take input till the condition is mate
	while(input != -1){
		
		// New dyanmic location is created for every input
		node *n = new node(input);
		
		// If head is Null list has one input only so both head and tail should point same node
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			
			// Here more inputs are given therefore increment only tail 
			tail -> next = n;
			// tail now points to next node
			tail = n;
			//or : tail = tail -> next;
		}cin>>input;// Next input in the list
	}//tail = NULL;
	
	return head;
		
}

// Printing the given linklist
void *printlist(node *head){
	
	node *temp = head;
	
	while(temp != NULL){
		
		cout<<temp -> data<<" ";
		temp = temp -> next;
		
	}cout<<endl;
}


// adding the node in ith index
void addnode(node *head, int index, int data){
	
	node *newnode = new node(data);
	node *temp = head;
	int count = 0;
	
	while(temp != NULL && count<index-1){
		
		count++;
		temp = temp -> next;
	}
	if(temp != NULL){
	
		node *a = temp -> next;
		temp -> next = newnode;
		newnode -> next = a;
	}
}

// Delete node of given index
void deletenode(node *head, int index){
	
	node *temp = head;
	int count = 0;
	
	if(index != 0){
	
		while(temp != NULL && count<index-1){
			
			count++;
			temp = temp -> next;
		}
	
		if(temp != NULL){
			
			node *dnode = temp -> next;
			node *newnode = dnode -> next;
			temp -> next = newnode;
			
			delete dnode;
	}
 }
}

// mid point of linklist 
void midpoint(node *head){
	
	if(head == NULL || head -> next == NULL){
		return;
	}
	node *mid = head, *end = head -> next;
	
	while(end != NULL && end -> next != NULL){
		
		mid = mid -> next;
		end = end -> next -> next;
	}cout<<mid -> data<<endl;
}

 
 






int main(){
	
	node *start = takeinput(); // userinput fun call
	
	printlist(start); // before the node adding
	
	
	addnode(start,1,33);
	
	printlist(start); // after the node adding  
	
	deletenode(start,1); // delete the node
	
	printlist(start); // call print to print latest list
	 
	midpoint(start); // mid point of link list
	
	
		
	
}
