#include<bits/stdc++.h>
using namespace std;
template<typename x>

// Binary tree node
class Tnode{
	public:
		x data;
		Tnode *left;
		Tnode *right;
		
		Tnode(x data){
			this->data = data;
			left = NULL;
			right = NULL;
		}
		
		~Tnode(){
			delete left;
			delete right;
		}
};

// Taking user input in binary tree
Tnode<int> *takeinput(){
	 int rootdata;
	 cout<<"Enter data "<<endl;
	 cin>> rootdata;
	 if(rootdata == -1) return NULL;
	 
	 Tnode<int> *root  = new Tnode<int>(rootdata);
	 Tnode<int> *leftchild = takeinput();
	 Tnode<int> *rightchild = takeinput(); 
	 root->left = leftchild;
	 root->right = rightchild;
	 
	 return root;
}

// Take input level wise
Tnode<int> *takelevelinput(){
	int rootdata;
	cout<<"Enter the data "<<endl;
	cin>>rootdata;
	if(rootdata == -1) return NULL;
	
	Tnode<int> *root = new Tnode<int> (rootdata);
	queue<Tnode<int>*> pending;
	pending.push(root);
	
	while(pending.size() != 0){
		Tnode<int> *front = pending.front();
		pending.pop();
		cout<<"enter the left child of "<<front->data<<endl;
		int leftdata;
		cin>>leftdata;
		
		
		if(leftdata != -1){
			Tnode<int> *child = new Tnode<int>(leftdata);
			front->left = child;
			pending.push(child);
		}
		
		cout<<"enter the right child of "<<front->data<<endl;
		int rightdata;
		cin>>rightdata;
		
		if(rightdata != -1){
			Tnode<int> *child = new Tnode<int>(rightdata);
			front->right = child;
			pending.push(child);
		}
	}
	return root;
}


// print Binary tree
void Btreeprint(Tnode<int> *root){
	
	if(root == NULL)return;
	
	cout<<root->data<<" :";
	if(root->left){
		cout<<"L-"<<root->left->data<<" ";
	}
	if(root->right){
		cout<<"R-"<<root-> right->data;
	}
	cout<<endl;
	Btreeprint(root->left);
	Btreeprint(root->right);
}


// print level wise
void Blevelwise(Tnode<int> *root){

if(root == NULL) return;
    
    queue<Tnode<int>*> q1;
    q1.push(root);
    
    while(!q1.empty()){
        root = q1.front();
        q1.pop();
        cout<<root->data<<":";
        if(root->left){
            cout<<"L:"<<root->left->data;
            q1.push(root->left);
        }else cout<<"L:-1";
        cout<<",";
        if(root->right){
            cout<<"R:"<<root->right->data;
            q1.push(root->right);
        }else cout<<"R:-1";
            
        cout<<endl;
    }
}

// Height of the Binary tree
int height(Tnode<int> *root){
	
	if(root == NULL)return NULL;
    int a = height(root->left);
    int b = height(root->right);
    return a>b? a+1:b+1;
}

// node count
int nodecount(Tnode<int> *root){
	
	if(root == NULL) return 0;
	
	return 1 + nodecount(root->left) + nodecount(root->right);
}


// TRAVERSALS in binary tree 

// Preorder Treversal
void preorder(Tnode<int> *root){
	
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

// Inorder Traversal
void inorder(Tnode<int> *root){
	
	if(root==NULL)return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

//Post order Traversal
void postorder(Tnode<int> *root){
	if(root==NULL)return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}





// Driver code
int main(){
	
	//Tnode<int> *root = takeinput();
	
//	Tnode<int> *n1 = new Tnode<int>(20);
//	Tnode<int> *n2 = new Tnode<int>(30);
//	
//	root->left = n1;
//	root->right = n2;
	
	Tnode<int> *levelroot  = takelevelinput();
	
	
	//Btreeprint(levelroot);
	cout<<"Binary Tree :"<<endl;
	Blevelwise(levelroot);cout<<endl;
	
	cout<<"Node count: "<<nodecount(levelroot);
}
