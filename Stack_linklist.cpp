#include<bits/stdc++.h>
using namespace std;

// Stack in linklist

class node{
	public:
		int data;
		node *next;
		
		node(int data){
			this -> data = data;
			next = NULL;
		}
};

class stack{
	node *head;
	int size; // this just to get num of elements in th stack
	
	public:
		
		stack(){
			head = NULL;
			size = 0;
		}
		// to get size of stack
		int getsize(){
			return size;
		}
		// empty satck info
		bool isEmpty(){
			return size == 0;
		}
		
		// pushing value
		void push(int element){
			node *n = new node(element);
			node *tail =NULL;
			
			if(head == NULL){
				head = n;
				tail = n;
				size++;
			}else{
				
				n -> next = head;
				head = n;
				size++;
			}
		}
		// deleting top Node
		void pop(){
			if(size == 0){
				return;
			}
			node *temp = head;
			head = head -> next;
			
			delete temp;
			size--;
		}
};

int main(){
	
	
}
