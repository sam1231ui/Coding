#include<bits/stdc++.h>
using namespace std;
template<typename T>

// class to make tree node
class Tnode{
	public:
		T data;
		vector<Tnode<T>*> child;
		
		Tnode(T data){
			 this -> data = data;
		}
		// deconstructor to distroy the created memory
		~Tnode() {
            for (int i = 0; i < child.size(); i++) {
                delete child[i];
            }
        }
	
};


// Depth of tree
void kdepth(Tnode<int> *root, int k){
	
	if(root == NULL)return;
	
	if(k==0){
		cout<<root->data<<endl;
		return;
	}
	for(int i=0; i<root->child.size(); i++){
		kdepth(root->child[i], k-1);
	}
}



// Max element node
Tnode<int>* maxDataNode(Tnode<int>* root){
    
    if(root == NULL)return NULL;
    
    Tnode<int> * ans = root;
    int max = root->data;
    int childcount = root->child.size();
    
    for(int i=0; i<childcount; i++){
      	Tnode<int> *temp = maxDataNode(root->child[i]);
        if(temp->data > max){
            max = temp->data;
            ans =temp;
        }
    }
    return ans;
}

//Count of total node
int countnode(Tnode<int> *root){
	if(root == NULL)return 0;
	int ans = 1;
	int childcount = root->child.size();
	
	for(int i=0; i<childcount; i++){
		ans += countnode(root->child[i]);
	}return ans;
}

// sum of total nodes of tree
int sumofnode(Tnode<int> *root){
	
	if(root == NULL)return 0;
	int ans = root->data;
	int childcount = root->child.size();
	
	for(int i=0; i<childcount; i++){
		
		ans += sumofnode(root->child[i]);
	}
	return ans;
}



// fun to take level wise input
Tnode<int> *levelinput(){
	
	int rootdata;
	cout<<"Enter Node"<<endl;
	cin>>rootdata;
	Tnode<int> *root = new Tnode<int>(rootdata);
	
	queue<Tnode<int>*> pnode;
	
	pnode.push(root);
	
	while(pnode.size() != 0){
		
		Tnode<int> *front = pnode.front();
		pnode.pop();
		cout<<"Enter num of children "<< front -> data<<endl;
		int num;
		cin>>num;
		
		for(int i=0; i<num; i++){
			
			int childdata;
			cout<<"Enter the data of "<<i<<" node in "<< front -> data<<endl;
			cin>>childdata;
			
			Tnode<int> *nextchild = new Tnode<int>(childdata);
			front -> child.push_back(nextchild); 
			pnode.push(nextchild);
			
		}
	}
	return root;
	
	
}

// printing of tree in level wise 
void levelprint(Tnode<int> *root){
	
	if(root == NULL) return;
	queue<Tnode<int>*> q;
	q.push(root);
 	
 	while(!q.empty()){
 		
 		Tnode<int> *curr = q.front();
 		q.pop();
 		cout<<curr->data<<":";
 		
 		int childcount = curr->child.size();
// 		if(childcount)
//        {
//            cout << curr->child[0]->data;
//            q.push(curr->child[0]);
//        }
 		for(int i=0; i<childcount; i++){
 			cout<<curr->child[i]->data<<",";
 			q.push(curr->child[i]);
		 }cout<<endl;
 		
	 }
	
}

// take input basic form
Tnode<int> *takeinput(){
	int rootdata;
	
	cout<<"Enter the data"<<endl;
	cin>>rootdata;
	Tnode<int> *root = new Tnode<int>(rootdata);
	
	int n;
	cout<<"Enter the num of children of tree "<< rootdata<< endl;
	cin>>n;
	for(int i=0; i<n; i++){
		Tnode<int> *subchild = takeinput();
		root -> child.push_back(subchild);
	}
	return root;
}

// print tree basic way
void treeprint(Tnode<int> *root){
	
	
	if(root == NULL){
		return;
	}
	// printing the data of root 
	cout<<root -> data<< ":";
	for(int i=0; i<root -> child.size(); i++){
		cout<<root -> child[i] -> data<< " "; // printing data of each child
	}
	cout<< endl;
	for(int i=0; i<root -> child.size(); i++){
		treeprint(root -> child[i]); // printing to next child
	}
}


// Traversal of tree

//Preorder
void preorder(Tnode<int> *root){
	
	if(root==NULL) return;
	cout<<root->data<<" ";
	
	for(int i=0; i<root->child.size(); i++){
		preorder(root->child[i]);
	}
}

//PostOrder
void printPostOrder(Tnode<int>* root) {
    if(root==NULL)return;
    
    Tnode<int> *ans = root;
    for(int i=0; i<root->child.size(); i++){
        
        printPostOrder(root->child[i]);
        //cout<<root->data<<" ";
    }
    cout<<root->data<<" ";
}





// driver code
int main(){
	
	//Tnode<int> *root = takeinput();  // basic form 
	Tnode<int> *root = levelinput();  // level wise input 
	cout<<"Structure of tree"<<endl;  // basic print 
	treeprint(root);
	cout<<endl;
	cout<<"Structure in level form"<<endl;
	levelprint(root);
	
}


