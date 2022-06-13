#include<bits/stdc++.h>
using namespace std;


// Dynamic Allocation

int main(){
	
	//syntax to dyamically allocate memorey
	int*p = new int;
	char*ch = new char;
	
	*p = 10;
	*ch = 'a';
	
	cout<<*p<<endl<<*ch<<endl;
	
	//array dynamically
	int n; 
	cout<<"Enter the size of array ";
	cin>>n;
	
	int*arr = new int[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	//print the given array
	for(int j=0; j<n; j++){
		cout<<arr[j]<<endl;
	}
	

	int r,c;
	
	cout<<"enter 2d array rows and columns ";
	cin>>r>>c;
	
	int **pr = new int*[r];
	for(int q=0; q<r; q++){
		pr[q] = new int[c];
		
		for(int j=0; j<c; j++){
			cin>>pr[q][j];
		}
	}
	
	//printing 2d array
	for(int k=0; k<r; k++){
		cout<<"2d matrix "<<endl;
		for(int l=0; l<c; l++){
			cout<<pr[k][l]<<" ";
		}cout<<endl;
	}
	
	//deleting memory
	delete []arr;
	delete p,ch;
	//2d array delete 
	for(int i=0; i<r; i++){
		delete[] pr[i];
	}
	delete []pr;
}
