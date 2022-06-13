#include<bits/stdc++.h>
using namespace std;

// STL in c++


// Vector print
void vprint(vector<int> &v){
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<' ';
	}
}


int main(){
	
	
	// VECTORS
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x); //pushing element in vector
	}
	vprint(v);
	v.pop_back(); // deleteing last element
	vprint(v);
	
}
