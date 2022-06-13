#include<bits/stdc++.h>
using namespace std;

// node for linklist
class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this -> data = data;
			next = NULL;
		}
};

// Queue class
class Queue{
	Node *head;
	Node *tail;
	int size;
	
	public:
		Queue(){
			head = NULL;
			tail = NULL;
			int size = 0;
		}
		
		// member function of queue
		// getsize
		int getSize() {
			return size;
		}
	
		// if queue is empty
	    bool isEmpty() {
			 return size == 0;	
	    }
		
		// push element in queue
	    void enqueue(int data) {
			Node *n = new Node(data);
	        
	        if(head == NULL){
	            head = n;
	            tail = n;
	            size++;
	        }else{
	            tail -> next = n;
	            tail = tail -> next;
	            size++;
	        }
		}
		
		// to remove node from queue
	    int dequeue() {
	        if(isEmpty() == 1){
	            return -1;
	        }
	        int ans = head -> data;
	        Node *temp = head;
	        head = head -> next;
	        delete temp;
	        size--;
	        return ans;
	    }
		
		// check the front element
	    int front() {
        if(isEmpty() == 1){
            return -1;
        }
        
        return head -> data;
    }
};


int main(){
	
	Queue q;
	
	q.enqueue(10);
	q.enqueue(20);
	
	cout<<q.getSize()<<endl;
}

