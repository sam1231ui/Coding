//UNION 

#include <bits/stdc++.h>
using namespace std;

//Union is structure but have same location for same datatype;
union test{
	//Here both int a and y will have same location to store the element.
	int x;
	int y;
};



int main(){
	//Here even y is not given value still it will show same as x.
	test p;
	p.x = 10;
	cout<<p.x<<endl<<p.y;
	
	 
}

