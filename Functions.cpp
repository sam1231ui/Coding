////FUNCTIONS

#include <bits/stdc++.h>
using namespace std;


//This program is CALL BY VALUE 

void swap1(int a, int b){
	int temp =0;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;

}

//This is program for CALL BY REFERENCE 
void swap2(int &a, int &b){
	int temp =0;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;

}


//FUNCTION OVERLOADING
int add(int &y, int &x){
	return (x+y);
}

string add(string &x, string &y){
	return (x+y);
}




int main(){
	int a=10,b=20;
	swap1(a,b);
	
	//Here cout a and b will give same value as in int main because void fun has diff memory with same name.
	cout<<a<<" "<<b<<endl;
	
	swap2(a,b);
	//Here cout a and b will give same value as swap as it is same memory.
	cout<<a<<" "<<b<<endl;
	
	 
	
	//call for function overloading.
	int s,t;
	string x,y;
 	cin>>s>>t;
 	cout<<add(s,t)<<endl<<add(x,y);
		
	return 0;
 
}





 




 


