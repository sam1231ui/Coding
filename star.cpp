#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;

for(int i =1; i<=(n+1)/2; i++){
	
	 for(int j=1; j<=(n+1)/2-i; j++){
	 	cout<<' ';
	 }
	 for(int k =1; k<=(i*2-1); k++){
	 	cout<<'*';
	 }cout<<endl;
		
	}
for(int i =(n-1)/2; i>=1; i--){
	
	 for(int j=1; j<=(n+1)/2-i; j++){
	 	cout<<' ';
	 }
	 for(int k =1; k<=((2*i)-1); k++){
	 	cout<<'*';
	 }cout<<endl;
		
	}
}


 

